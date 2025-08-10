import gg
import gx
import sokol.sapp
import sokol.gfx
import sokol.sgl
import time
import math

const win_width = 480
const win_height = 480
const bg_color = gx.black
const tau =  6.283185307179586
const fft_bins = 128
const fft_samples = 2048 // buffer_byte_size / sizeof(i16)

struct App {
mut:
	gg          &gg.Context = unsafe { nil }
	pip_3d      sgl.Pipeline
	texture     gfx.Image
	sampler     gfx.Sampler
	init_flag   bool
	frame_count int
	mouse_x     int = -1
	mouse_y     int = -1
	last_time   time.Time = time.now()
	audio_data AudioData = AudioData{
		data_format: C.AudioStreamBasicDescription{
			mSampleRate: 44100.0,
			mFormatID:   C.kAudioFormatLinearPCM,
			mFormatFlags: C.kAudioFormatFlagIsSignedInteger | C.kAudioFormatFlagIsPacked,
			mBytesPerPacket: 2,
			mFramesPerPacket: 1,
			mBytesPerFrame: 2,
			mChannelsPerFrame: 1,
			mBitsPerChannel: 16,
		},
		buffer_byte_size: 0,
		current_packet: 0,
		recording: false,
		decibel: 0.0,
		fft: []f32{ len: fft_bins, init: 0.0 }, // 64 bins for FFT
	}
}

struct AudioData {
mut:
    data_format     C.AudioStreamBasicDescription
    queue           C.AudioQueueRef
    buffers         [3]C.AudioQueueBufferRef
    audio_file       C.AudioFileID
    buffer_byte_size u32
    current_packet   i64
    recording        bool
	decibel          f32
	fft 			[]f32
	lookup_sin 		[]f64
	lookup_cos 		[]f64
}

fn create_texture(w int, h int, buf &u8) (gfx.Image, gfx.Sampler) {
	sz := w * h * 4
	mut img_desc := gfx.ImageDesc{
		width:       w
		height:      h
		num_mipmaps: 0
		// usage: .dynamic
		label:         &char(unsafe { nil })
		d3d11_texture: 0
	}
	// comment, if .dynamic is enabled
	img_desc.data.subimage[0][0] = gfx.Range{
		ptr:  buf
		size: usize(sz)
	}

	sg_img := gfx.make_image(&img_desc)

	mut smp_desc := gfx.SamplerDesc{
		min_filter: .linear
		mag_filter: .linear
		wrap_u:     .clamp_to_edge
		wrap_v:     .clamp_to_edge
	}

	sg_smp := gfx.make_sampler(&smp_desc)
	return sg_img, sg_smp
}

fn destroy_texture(sg_img gfx.Image) {
	gfx.destroy_image(sg_img)
}

// Use only if usage: .dynamic is enabled
fn update_text_texture(sg_img gfx.Image, w int, h int, buf &u8) {
	sz := w * h * 4
	mut tmp_sbc := gfx.ImageData{}
	tmp_sbc.subimage[0][0] = gfx.Range{
		ptr:  buf
		size: usize(sz)
	}
	gfx.update_image(sg_img, &tmp_sbc)
}

fn cube_t(r f32, g f32, b f32) {
	sgl.begin_quads()
	// edge color
	sgl.c3f(r, g, b)
	// edge coord
	// x,y,z, texture cord: u,v
	sgl.v3f_t2f(-1.0, 1.0, -1.0, 0.0, 0.25)
	sgl.v3f_t2f(1.0, 1.0, -1.0, 0.25, 0.25)
	sgl.v3f_t2f(1.0, -1.0, -1.0, 0.25, 0.0)
	sgl.v3f_t2f(-1.0, -1.0, -1.0, 0.0, 0.0)
	sgl.c3f(r, g, b)
	sgl.v3f_t2f(-1.0, -1.0, 1.0, 0.0, 0.25)
	sgl.v3f_t2f(1.0, -1.0, 1.0, 0.25, 0.25)
	sgl.v3f_t2f(1.0, 1.0, 1.0, 0.25, 0.0)
	sgl.v3f_t2f(-1.0, 1.0, 1.0, 0.0, 0.0)
	sgl.c3f(r, g, b)
	sgl.v3f_t2f(-1.0, -1.0, 1.0, 0.0, 0.25)
	sgl.v3f_t2f(-1.0, 1.0, 1.0, 0.25, 0.25)
	sgl.v3f_t2f(-1.0, 1.0, -1.0, 0.25, 0.0)
	sgl.v3f_t2f(-1.0, -1.0, -1.0, 0.0, 0.0)
	sgl.c3f(r, g, b)
	sgl.v3f_t2f(1.0, -1.0, 1.0, 0.0, 0.25)
	sgl.v3f_t2f(1.0, -1.0, -1.0, 0.25, 0.25)
	sgl.v3f_t2f(1.0, 1.0, -1.0, 0.25, 0.0)
	sgl.v3f_t2f(1.0, 1.0, 1.0, 0.0, 0.0)
	sgl.c3f(r, g, b)
	sgl.v3f_t2f(1.0, -1.0, -1.0, 0.0, 0.25)
	sgl.v3f_t2f(1.0, -1.0, 1.0, 0.25, 0.25)
	sgl.v3f_t2f(-1.0, -1.0, 1.0, 0.25, 0.0)
	sgl.v3f_t2f(-1.0, -1.0, -1.0, 0.0, 0.0)
	sgl.c3f(r, g, b)
	sgl.v3f_t2f(-1.0, 1.0, -1.0, 0.0, 0.25)
	sgl.v3f_t2f(-1.0, 1.0, 1.0, 0.25, 0.25)
	sgl.v3f_t2f(1.0, 1.0, 1.0, 0.25, 0.0)
	sgl.v3f_t2f(1.0, 1.0, -1.0, 0.0, 0.0)
	sgl.end()
}

fn draw_texture_cubes(app App) {
	sgl.defaults()
	sgl.load_pipeline(app.pip_3d)

	sgl.enable_texture()
	sgl.texture(app.texture, app.sampler)

	sgl.matrix_mode_projection()
	sgl.perspective(sgl.rad(45.0), 1.0, 0.1, 100.0)

	sgl.matrix_mode_modelview()
	sgl.translate(0.0, 0.5, -10.0)
	sgl.rotate(0.5, 1.0, 0.0, 0.0)
	step := f32(app.last_time.unix_milli() % 10000) / 10000.0 * tau
	sgl.rotate(step, 0.0, 1.0, 0.0)
	cube_t(1, 1, 1)
	sgl.push_matrix()
	sgl.disable_texture()

	// set color based on decibel level
	db := (app.audio_data.decibel+60.0) / 60.0 + 0.3
	// TODO optimize

	// unit circle
	for i in 0 .. fft_bins {
		angle := f32(i) * tau / f32(fft_bins)
		x := f32(math.cos(angle) * 2.5) * (app.audio_data.fft[i]*2 + 1.0)
		y := f32(math.sin(angle) * 2.5) * (app.audio_data.fft[i]*2 + 1.0)
		z := f32(0.0) // scale fft to fit in the circle
		sgl.push_matrix()
		sgl.translate(x, z, y)
		sgl.scale(0.07, 0.07, 0.07)
		cube_t(db, db, db)
		sgl.pop_matrix()
	}

	sgl.pop_matrix()
}

fn frame(mut app App) {
	ws := gg.window_size_real_pixels()
	ratio := f32(ws.width) / ws.height
	dw := ws.width
	dh := ws.height
	// x1 := dw/2
	// fps := 1000 / (time.now() - app.last_time).milliseconds()
	// print('FPS: $fps\n')

	app.gg.begin()
	// sgl.defaults()

	// textured cubed with viewport
	// y: := int(dh / 5)
	sgl.viewport(0, 0, dw, int(dh * ratio), true)
	draw_texture_cubes(app)

	app.frame_count++
	app.last_time = time.now()
	time.sleep(time.millisecond * 33) // ~60 FPS

	app.gg.end()
}

struct FFTWorkspace {
mut:
	odd_real  []f64
	odd_imag  []f64
	even_real []f64
	even_imag []f64
	n int
}

// Simple recursive FFT implementation (Cooley-Tukey algorithm)
// prefers powers of 2
// returns the new value in real and imag
// would like to just use the array and return it, but i guess i cant do thats
// i mean makes sense, that is a clone, but still. feels off
fn fft(mut ctx FFTWorkspace, mut real []f64, mut imag []f64, lookup_sin []f64, lookup_cos []f64) {
	n := real.len
	if n <= 1 {
		return
	}

	// use k as index. it is half the size of n, but can just use i instead of bespoke list
	k := int(n/2)

	// Divide: split into 2 lists, odd and even
	mut odd_real := []f64{ len: k, init: 0.0 }
	mut odd_imag := []f64{ len: k, init: 0.0 }
	mut even_real := []f64{ len: k, init: 0.0 }
	mut even_imag := []f64{ len: k, init: 0.0 }
	mut even_i := 0
	mut odd_i := 0
	for i in 0..n {
		if i&1 == 1 {
			odd_real[odd_i] = real[i]
			odd_imag[odd_i] = imag[i]
			odd_i++
		} else {
			even_real[even_i] = real[i]
			even_imag[even_i] = imag[i]
			even_i++
		}
	}

	// use init values of even and odds
	// set to 1 because of the last inner call
	// TODO try context. it will modify it, but wont they be done with it by that time
	ctx.n = k
	fft(mut ctx, mut even_real, mut even_imag, lookup_sin, lookup_cos)
	ctx.n = k
	fft(mut ctx, mut odd_real, mut odd_imag, lookup_sin, lookup_cos)
	
	// Conquer: combine results
	// Complex multiplication: (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
    // twiddle * odd = (twiddle_real + i*twiddle_imag) * (odd_real + i*odd_imag)
	for i in 0..k {
		// Eulers formula
		// use precomputed values
		twiddle_imag, twiddle_real := lookup_sc(i, n, lookup_sin, lookup_cos)

		// Combine: even ± twiddle*odd
		// Concatenate results with i+k
		temp_real := twiddle_real * odd_real[i] - twiddle_imag * odd_imag[i]
		real[i] = even_real[i] + temp_real   // Real part of first half
		real[i+k] = even_real[i] - temp_real  // Real part of second half 

		temp_imag := twiddle_real * odd_imag[i] + twiddle_imag * odd_real[i]
		imag[i] = even_imag[i] + temp_imag   // Imaginary part of first half
		imag[i+k] = even_imag[i] - temp_imag  // Imaginary part of second half 
	}

	return
}

// Fast lookup for any FFT size
fn lookup_sc(i int, n int, lookup_sin []f64, lookup_cos []f64) (f64, f64) {
    // Map current (i,n) to the max table index. it solved it
    table_index := (i * fft_samples / n) % fft_samples
    return lookup_sin[table_index], lookup_cos[table_index]
}

fn handle_audio(inUserData voidptr, inAQ C.AudioQueueRef, inBuffer C.AudioQueueBufferRef, inStartTime &C.AudioTimeStamp, inNumPackets u32, inPacketDesc &C.AudioStreamPacketDescription) {
	mut audio_data := unsafe { &AudioData(inUserData) }
	
	if inBuffer.mAudioDataByteSize > 0 {
        samples := unsafe { &i16(inBuffer.mAudioData) }
        num_samples := inBuffer.mAudioDataByteSize / sizeof(i16)
        
        mut sum_s := i64(0)
		// TODO print biggest samples. then compare math of them. print to stdout, redirect to file
		// TODO something i thought about. too many zeros. or something with too little. maybe going too fast
        for i in 0 .. num_samples {
			sample := unsafe { i64(samples[i]) }
            sum_s += sample * sample
        }
        rms := math.sqrt(f64(sum_s) / f64(num_samples))
        db := 20 * math.log10(rms / 32767.0)
        
        // Simple level meter
        mut bars := int((db + 60) / 3) // Normalize -60dB to 0dB to 0-20 bars
        if bars < 0 { bars = 0 }
        if bars > 20 { bars = 20 }

		// Calculate magnitude: sqrt(real² + imag²)
		mut real := []f64{ len: int(num_samples), init: 0.0 }
		for i in 0..num_samples {
			real[i] = f64(unsafe{ samples[i] }) / 32767.0
		}

		mut imag := []f64{ len: real.len, init: 0 }
		mut ctx := FFTWorkspace{
			odd_real:  []f64{ len: int(num_samples/2), init: 0.0 }
			odd_imag:  []f64{ len: int(num_samples/2), init: 0.0 }
			even_real: []f64{ len: int(num_samples/2), init: 0.0 }
			even_imag: []f64{ len: int(num_samples/2), init: 0.0 }
			n: real.len
		}
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

		sample_rate := audio_data.data_format.mSampleRate
		
		mut log_frequencies := []f64{ len: fft_bins, init: 0.0 }
		mut reduce_log_spectrum := []f64{ len: fft_bins, init: 0.0 }

		max_freq := sample_rate / 2
		min_freq := sample_rate / (2 * magnitude.len)
		
		// Create logarithmically spaced frequency bins
		log_min := math.log10(math.max(min_freq, 1))
		log_max := math.log10(max_freq)
		log_step := (log_max - log_min) / fft_bins
		
		for i in 0 .. fft_bins {
			log_freq := log_min + i * log_step
			center_freq := math.pow(10, log_freq)
			
			// Define bin edges
			bin_start := math.pow(10, log_freq - log_step / 2)
			bin_end := math.pow(10, log_freq + log_step / 2)
			
			// Map to linear bins and average
			bin_width := sample_rate / (2 * magnitude.len)
			start_bin := int(math.floor(bin_start / bin_width))
			end_bin := int(math.min(math.ceil(bin_end / bin_width), magnitude.len - 1))
			
			// Energy-weighted average
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

			// Calculate theoretical maximum for each bin
			theoretical_max := math.sqrt(int(num_samples) * (count + 1)) // close enough. ai cant figure it out
			reduce_log_spectrum[i] = reduce_log_spectrum[i] / theoretical_max
		}

		audio_data.decibel = f32(db)
		audio_data.fft = reduce_log_spectrum.map(f32(it))
    }

	// Re-enqueue the buffer for further use
	unsafe {
		C.AudioQueueEnqueueBuffer(inAQ, inBuffer, 0, nil)
	}
}

fn record_audio(mut app App) {
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

	app.audio_data.buffer_byte_size = 4096 // Set buffer size

	// precompute sin and cos values for FFT
	n := int(fft_samples/2)
	app.audio_data.lookup_sin = []f64{ len: n, init: 0.0 }
	app.audio_data.lookup_cos = []f64{ len: n, init: 0.0 }
	for i in 0..n {
		// -2 * math.pi * k / n
		angle := -tau * f64(i) / n
		app.audio_data.lookup_sin[i], app.audio_data.lookup_cos[i] = math.sincos(angle)
	}

	// Allocate and enqueue buffers
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

	// Start recording
    status = C.AudioQueueStart(app.audio_data.queue, unsafe { nil })
    if status != 0 {
        C.AudioQueueDispose(app.audio_data.queue, true)
        return
    }
}

fn my_init(mut app App) {
	app.init_flag = true

	record_audio(mut &app)

	// set max vertices,
	// for a large number of the same type of object it is better use the instances!!
	desc := sapp.create_desc()
	gfx.setup(&desc)
	sgl_desc := sgl.Desc{
		max_vertices: 50 * 65536
	}
	sgl.setup(&sgl_desc)

	// 3d pipeline
	mut pipdesc := gfx.PipelineDesc{}
	unsafe { vmemset(&pipdesc, 0, int(sizeof(pipdesc))) }

	color_state := gfx.ColorTargetState{
		blend: gfx.BlendState{
			enabled:        true
			src_factor_rgb: .src_alpha
			dst_factor_rgb: .one_minus_src_alpha
		}
	}
	pipdesc.colors[0] = color_state

	pipdesc.depth = gfx.DepthState{
		write_enabled: true
		compare:       .less_equal
	}
	pipdesc.cull_mode = .back
	app.pip_3d = sgl.make_pipeline(&pipdesc)

	// create chessboard texture 256*256 RGBA
	w := 256
	h := 256
	sz := w * h * 4
	tmp_txt := unsafe { malloc(sz) }
	mut i := 0
	for i < sz {
		unsafe {
			y := (i >> 0x8) >> 2 // 2 gives best look. higher doesnt look right
			x := (i & 0xFF) >> 2
			// upper left corner
			if x == 0 && y == 0 {
				tmp_txt[i] = u8(0xFF)
				tmp_txt[i + 1] = u8(0)
				tmp_txt[i + 2] = u8(0)
				tmp_txt[i + 3] = u8(0xFF)
			} else {
				if x == y || x == 0 || y == 0 || x == 63 || y == 63 {
					tmp_txt[i] = u8(0) // red
					tmp_txt[i + 1] = u8(0xFF) // green
					tmp_txt[i + 2] = u8(0) // blue
				} else {
					tmp_txt[i] = u8(0xFF) // red
					tmp_txt[i + 1] = u8(0) // green
					tmp_txt[i + 2] = u8(0xFF) // blue
				}
				tmp_txt[i + 3] = u8(0xFF) // alpha
			}
			i += 4
		}
	}
	unsafe {
		app.texture, app.sampler = create_texture(w, h, tmp_txt)
		free(tmp_txt)
	}
}

fn my_event_manager(mut ev gg.Event, mut app App) {
	
}

fn main() {
	mut app := &App{}
	app.gg = gg.new_context(
		width:         win_width
		height:        win_height
		create_window: true
		window_title:  'Ordis'
		user_data:     app
		bg_color:      bg_color
		frame_fn:      frame
		init_fn:       my_init
		event_fn:      my_event_manager
	)
	app.gg.run()
}
