import gg
import gx
import sokol.sapp
import sokol.gfx
import sokol.sgl
import time
import math
import arrays

const win_width = 480
const win_height = 480
const bg_color = gx.black
const tau =  6.283185307179586

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
		fft: []f32{ len: 64, init: 0.0 }, // 64 bins for FFT
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
}

// TODO maybe show waveform, but not sure how to display it. would look odd
// TODO use log, everything else it fine

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

	// unit circle
	for i in 0 .. 64 {
		angle := f32(i) * tau / 64.0
		x := f32(math.cos(angle) * 2.5)
		y := f32(math.sin(angle) * 2.5)
		// z := (app.audio_data.decibel+60.0) / 60.0 * 2.5 // scale decibel to fit in the circle
		z := app.audio_data.fft[i] * 2.5 // scale fft to fit in the circle
		sgl.push_matrix()
		sgl.translate(x, z, y)
		sgl.scale(0.1, 0.1, 0.1)
		cube_t(0.5, 0.5, 0.5)
		sgl.pop_matrix()
	}

	sgl.pop_matrix()

	sgl.disable_texture()
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

// Simple recursive FFT implementation (Cooley-Tukey algorithm)
// prefers powers of 2
fn fft(real []f64, imag []f64) ([]f64, []f64) {
	n := real.len

	mut imag_use := imag.clone()
	if imag_use.len == 0 {
		imag_use = []f64{ len: n, init: 0 }
	}

	if n <= 1 {
		return real, imag_use
	}

	// Divide: split into 2 lists, odd and even
	mut odd_indices_real := []f64{}
	mut odd_indices_imag := []f64{}
	mut even_indices_real := []f64{}
	mut even_indices_imag := []f64{}
	for i in 0..n {
		if i&1 == 1 {
			odd_indices_real << real[i]
			odd_indices_imag << imag_use[i]
		} else {
			even_indices_real << real[i]
			even_indices_imag << imag_use[i]
		}
	}

	even_real, even_imag := fft(odd_indices_real, odd_indices_imag)
	odd_real, odd_imag := fft(even_indices_real, even_indices_imag)
	
	// count := []int{len: 4, init: index}
	// Conquer: combine results
	k := []int{ len: int(n/2), init: index }
	// -2 * math.pi * k / n // TODO tau
    angle := k.map( -2 * math.pi * f64(it) / n )

	// Eulers formula
	twiddle_real := angle.map(math.cos(it))
	twiddle_imag := angle.map(math.sin(it))

	// Complex multiplication: (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
    // twiddle * odd = (twiddle_real + i*twiddle_imag) * (odd_real + i*odd_imag)
	mut temp_real := []f64{ len: twiddle_real.len, init: 0.0 }
	mut temp_imag := []f64{ len: twiddle_real.len, init: 0.0 }
	for i in 0..twiddle_real.len {
		temp_real[i] = twiddle_real[i] * odd_real[i] - twiddle_imag[i] * odd_imag[i]
		temp_imag[i] = twiddle_real[i] * odd_imag[i] + twiddle_imag[i] * odd_real[i]
	}
    
    // Combine: even ± twiddle*odd
    mut left_real := []f64{ len: twiddle_real.len, init: 0.0 }
    mut left_imag := []f64{ len: twiddle_real.len, init: 0.0 }
	for i in 0..twiddle_real.len {
		left_real[i] = even_real[i] + temp_real[i]   // Real part of first half
		left_imag[i] = even_imag[i] + temp_imag[i]   // Imaginary part of first half
	}
    
    mut right_real := []f64{ len: twiddle_real.len, init: 0.0 }
    mut right_imag := []f64{ len: twiddle_real.len, init: 0.0 }
	for i in 0..twiddle_real.len {
		right_real[i] = even_real[i] - temp_real[i]  // Real part of second half  
		right_imag[i] = even_imag[i] - temp_imag[i]  // Imaginary part of second half
	}
    
    // Concatenate results
    mut result_real := left_real.clone()
	result_real << right_real
    mut result_imag := left_imag.clone()
	result_imag << right_imag

	return result_real, result_imag
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
		mut bases := []f64{ len: int(num_samples), init: 0.0 }
		for i in 0..num_samples {
			bases[i] = f64(unsafe{ samples[i] }) / 32767.0 * 2 - 1 // Normalize. think it wants -1 to 1
		}
		real, imag := fft(bases, []f64{})
		mut magnitude := []f64{ len: int(num_samples), init: 0.0 }
		for i in 0..num_samples {
			magnitude[i] = math.sqrt(real[i]*real[i] + imag[i]*imag[i])
		}
        
        // print("\033[ALevel: ")
		for i in 0 .. 20 {
			if i < bars {
				print("█")
			} else {
				print("░")
			}
		}
		println(" ($db dB)")

		// TODO bucket the freqs. voices only need 100-3000Hz
		bins := int(64)
		sample_rate := audio_data.data_format.mSampleRate
		
		mut log_frequencies := []f64{ len: bins, init: 0.0 }
		mut reduce_log_spectrum := []f64{ len: bins, init: 0.0 }

		max_freq := sample_rate / 2
		min_freq := sample_rate / (2 * magnitude.len)
		
		// Create logarithmically spaced frequency bins
		log_min := math.log10(math.max(min_freq, 1))
		log_max := math.log10(max_freq)
		log_step := (log_max - log_min) / bins
		
		for i in 0 .. bins {
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
			log_frequencies[i] = center_freq;
			reduce_log_spectrum[i] = avg_magnitude;
		}

		// oh. this was printing all of them, so it was fine
		// the other was only printing the first. so no fix.
		// thats fine, and im learning stuff. kidna cool
		// so thats all correct, and this works right.
		for val in reduce_log_spectrum {
			if val > 0.2 {
				print("█")
			} else {
				print("░")
			}
		}
		println()

		// this could have worked, but still not as good. something wrong with indexing
		// still makes more sense to do this
		// for i in 0 .. bins {
		// 	start := i * bin_size
		// 	end := start + bin_size
		// 	reduce_spectrum[i] = arrays.sum(magnitude[start..end]) or { 0.0 } / f64(int(num_samples)*bin_size)
		// 	if reduce_spectrum[i] > 0.2 {
		// 		print("█")
		// 	} else {
		// 		print("░")
		// 	}
		// }
		// println("")

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
			y := (i >> 0x8) >> 5 // 8 cell
			x := (i & 0xFF) >> 5 // 8 cell
			// upper left corner
			if x == 0 && y == 0 {
				tmp_txt[i] = u8(0xFF)
				tmp_txt[i + 1] = u8(0)
				tmp_txt[i + 2] = u8(0)
				tmp_txt[i + 3] = u8(0xFF)
			}
			// low right corner
			else if x == 7 && y == 7 {
				tmp_txt[i] = u8(0)
				tmp_txt[i + 1] = u8(0xFF)
				tmp_txt[i + 2] = u8(0)
				tmp_txt[i + 3] = u8(0xFF)
			} else {
				col := if ((x + y) & 1) == 1 { 0xFF } else { 0 }
				tmp_txt[i] = u8(col) // red
				tmp_txt[i + 1] = u8(col) // green
				tmp_txt[i + 2] = u8(col) // blue
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
