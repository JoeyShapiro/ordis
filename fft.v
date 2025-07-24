import math
import os

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

fn main() {
	data := os.read_file('signal.csv') or {
		println('fail')
		exit(0)
	}

	samples := data.rsplit(',').map(it.f64())

	real, imag := fft(samples, []f64{})
	mut magnitude := []f64{ len: samples.len, init: 0.0 }
	for i in 0..samples.len {
		magnitude[i] = math.sqrt(real[i]*real[i] + imag[i]*imag[i])
	}

	println(magnitude)
}
