import math

struct AudioData {
mut:
	data_format      C.AudioStreamBasicDescription
	queue            C.AudioQueueRef
	buffers          [3]C.AudioQueueBufferRef
	audio_file       C.AudioFileID
	buffer_byte_size u32
	current_packet   i64
	recording        bool
	decibel          f32
	fft              []f32
	lookup_sin       []f32
	lookup_cos       []f32
}

fn handle_audio(inUserData voidptr, inAQ C.AudioQueueRef, inBuffer C.AudioQueueBufferRef, inStartTime &C.AudioTimeStamp, inNumPackets u32, inPacketDesc &C.AudioStreamPacketDescription) {
	mut audio_data := unsafe { &AudioData(inUserData) }

	if inBuffer.mAudioDataByteSize > 0 {
		samples := unsafe { &i16(inBuffer.mAudioData) }
		mut num_samples := inBuffer.mAudioDataByteSize / sizeof(i16)
		mut power := u32(1)
		for power <= num_samples >> 1 {
			power <<= 1
		}
		num_samples = power

		mut sum_s := i64(0)
		for i in 0 .. num_samples {
			sample := unsafe { i64(samples[i]) }
			sum_s += sample * sample
		}
		rms := math.sqrt(f64(sum_s) / f64(num_samples))
		db := 20 * math.log10(rms / 32767.0)

		mut bars := int((db + 60) / 3)
		if bars < 0 { bars = 0 }
		if bars > 20 { bars = 20 }

		mut real := []f32{ len: int(num_samples), init: 0.0 }
		for i in 0..num_samples {
			real[i] = f32(unsafe{ samples[i] }) / 32767.0
		}

		mut imag := []f32{ len: real.len, init: 0 }
		mut ctx := FFTContext{}
		fft(mut ctx, mut real, mut imag, audio_data.lookup_sin, audio_data.lookup_cos)
		mut magnitude := []f64{ len: int(num_samples), init: 0.0 }
		for i in 0..num_samples {
			magnitude[i] = math.sqrt(real[i]*real[i] + imag[i]*imag[i])
		}

		print("\033[ALevel: ")
		for i in 0 .. 20 {
			if i < bars {
				print("█")
			} else {
				print("░")
			}
		}
		println(" ($db dB)")

		mut log_frequencies := []f64{ len: fft_bins, init: 0.0 }
		mut reduce_log_spectrum := []f64{ len: fft_bins, init: 0.0 }

		max_freq := audio_data.data_format.mSampleRate / 2
		min_freq := audio_data.data_format.mSampleRate / (2 * num_samples)

		log_min := math.log10(math.max(min_freq, 1))
		log_max := math.log10(max_freq)
		log_step := (log_max - log_min) / fft_bins

		for i in 0 .. fft_bins {
			log_freq := log_min + i * log_step
			center_freq := math.pow(10, log_freq)

			bin_start := math.pow(10, log_freq - log_step / 2)
			bin_end := math.pow(10, log_freq + log_step / 2)

			bin_width := audio_data.data_format.mSampleRate / (2 * magnitude.len)
			start_bin := int(math.floor(bin_start / bin_width))
			end_bin := int(math.min(math.ceil(bin_end / bin_width), magnitude.len - 1))

			mut sum := 0.0
			mut count := 0
			for j in start_bin .. end_bin {
				if j >= 0 && j < magnitude.len {
					sum += magnitude[j] * magnitude[j]
					count++
				}
			}

			mut avg_magnitude := if count > 0 { math.sqrt(sum / count) } else { 0.0 }
			log_frequencies[i] = center_freq
			reduce_log_spectrum[i] = avg_magnitude

			theoretical_max := math.sqrt(int(num_samples) * (count + 1))
			reduce_log_spectrum[i] = reduce_log_spectrum[i] / theoretical_max
		}

		audio_data.decibel = f32(db)
		audio_data.fft = reduce_log_spectrum.map(f32(it))
	}

	unsafe {
		C.AudioQueueEnqueueBuffer(inAQ, inBuffer, 0, nil)
	}
}

fn record_audio(mut app App) {
	app.audio_data.data_format = C.AudioStreamBasicDescription{
		mSampleRate: 44100.0,
		mFormatID: C.kAudioFormatLinearPCM,
		mFormatFlags: C.kAudioFormatFlagIsSignedInteger | C.kAudioFormatFlagIsPacked,
		mBytesPerPacket: 2,
		mFramesPerPacket: 1,
		mBytesPerFrame: 2,
		mChannelsPerFrame: 1,
		mBitsPerChannel: 16,
	}
	app.audio_data.recording = true

	mut status := C.AudioQueueNewInput(&app.audio_data.data_format,
		handle_audio,
		&app.audio_data,
		unsafe { nil },
		unsafe { nil },
		0,
		&app.audio_data.queue)

	if status != 0 {
		println('Error creating audio queue: $status')
		return
	}

	app.audio_data.buffer_byte_size = 4096

	n := int(fft_samples / 2)
	app.audio_data.lookup_sin = []f32{ len: n, init: 0.0 }
	app.audio_data.lookup_cos = []f32{ len: n, init: 0.0 }
	for i in 0..n {
		angle := -tau * f32(i) / n
		s, c := math.sincos(angle)
		app.audio_data.lookup_sin[i], app.audio_data.lookup_cos[i] = f32(s), f32(c)
	}

	for i in 0 .. 3 {
		status = C.AudioQueueAllocateBuffer(app.audio_data.queue,
			app.audio_data.buffer_byte_size,
			&app.audio_data.buffers[i])
		if status != 0 {
			println("Error allocating buffer $i: $status")
			break
		}

		status = C.AudioQueueEnqueueBuffer(app.audio_data.queue,
			app.audio_data.buffers[i],
			0,
			unsafe { nil })
		if status != 0 {
			println("Error enqueuing buffer $i: $status")
			break
		}
	}

	status = C.AudioQueueStart(app.audio_data.queue, unsafe { nil })
	if status != 0 {
		C.AudioQueueDispose(app.audio_data.queue, true)
		return
	}
}
