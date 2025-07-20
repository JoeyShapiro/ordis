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
		recording: false
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

	// unit circle
	for i in 0 .. 32 {
		angle := f32(i) * tau / 32.0
		x := f32(math.cos(angle) * 2.5)
		y := f32(math.sin(angle) * 2.5)
		sgl.push_matrix()
		sgl.translate(x, 0.0, y)
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

fn handle_audio(inUserData voidptr, inAQ C.AudioQueueRef, inBuffer C.AudioQueueBufferRef, inStartTime &C.AudioTimeStamp, inNumPackets u32, inPacketDesc &C.AudioStreamPacketDescription) {
	mut audio_data := unsafe { &AudioData(inUserData) }
	
	println('Audio callback triggered! $audio_data.recording')

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

	app.audio_data.buffer_byte_size = 1024 // Set buffer size

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
