import numpy as np
import matplotlib.pyplot as plt

# i see the math, but i dont have time to figure it out
# i can learn about it. better to learn in code, rather than imitate wrong

# not acutlaly that long, or hard
def fft_real_only(x_real, x_imag=None):
    """
    FFT implementation using only real arithmetic
    x_real: real part of input (your PCM samples)
    x_imag: imaginary part of input (usually zeros for real signals)
    Returns: (real_part, imag_part) of FFT
    """
    N = len(x_real)
    
    # Initialize imaginary part if not provided
    if x_imag is None:
        x_imag = np.zeros(N)
    
    # Base case
    if N <= 1:
        return x_real, x_imag
    
    # Divide: split into even and odd
    even_real, even_imag = fft_real_only(x_real[::2], x_imag[::2])
    odd_real, odd_imag = fft_real_only(x_real[1::2], x_imag[1::2])
    
    # Twiddle factors using Euler's formula: e^(-2πik/N) = cos(-2πk/N) + i*sin(-2πk/N)
    k = np.arange(N // 2)
    angle = -2 * np.pi * k / N
    twiddle_real = np.cos(angle)  # Real part of twiddle factors
    twiddle_imag = np.sin(angle)  # Imaginary part of twiddle factors
    
    # Complex multiplication: (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
    # twiddle * odd = (twiddle_real + i*twiddle_imag) * (odd_real + i*odd_imag)
    temp_real = twiddle_real * odd_real - twiddle_imag * odd_imag
    temp_imag = twiddle_real * odd_imag + twiddle_imag * odd_real
    
    # Combine: even ± twiddle*odd
    left_real = even_real + temp_real   # Real part of first half
    left_imag = even_imag + temp_imag   # Imaginary part of first half
    
    right_real = even_real - temp_real  # Real part of second half  
    right_imag = even_imag - temp_imag  # Imaginary part of second half
    
    # Concatenate results
    result_real = np.concatenate([left_real, right_real])
    result_imag = np.concatenate([left_imag, right_imag])
    
    return result_real, result_imag


def fft_recursive(x):
    """
    Simple recursive FFT implementation (Cooley-Tukey algorithm)
    """
    N = len(x)
    
    # Base case
    if N <= 1:
        return x
    
    # Divide: split into even and odd indexed samples
    even = fft_recursive(x[::2])  # x[0], x[2], x[4], ...
    odd = fft_recursive(x[1::2])  # x[1], x[3], x[5], ...
    
    # Conquer: combine results
    T = np.exp(-2j * np.pi * np.arange(N // 2) / N)  # Twiddle factors
    
    # The key FFT step
    left = even + T * odd     # X[k] for k = 0, 1, ..., N/2-1
    right = even - T * odd    # X[k] for k = N/2, N/2+1, ..., N-1
    
    return np.concatenate([left, right])

# Create a test signal: mix of two sine waves
fs = 44_100  # Sample rate
t = np.linspace(0, 1, 2048, endpoint=False)  # 1 second, 1024 samples

# Signal: 50 Hz + 200 Hz sine waves
# signal = np.sin(2 * np.pi * 50 * t) #+ 0.5 * np.sin(2 * np.pi * 200 * t)
# print(min(signal), max(signal))  # Print first 10 samples for verification

# Add some noise to make it realistic
# signal += 0.1 * np.random.randn(len(signal))
# TODO is the first one really max

# with open('signal.csv', 'w') as f:
#     f.write(','.join([str(s) for s in signal]))

with open('ordis.txt') as f:
    data = f.read().split(', ')
    signal = [float(d) for d in data if d.strip()]
    print(f"FFT Result Length: {len(signal)}")

# signal = signal - np.mean(signal)  # Remove DC offset

# Compute FFT
fft_real, fft_imag = fft_real_only(signal)
# Calculate magnitude: sqrt(real² + imag²)
fft_result = np.sqrt(fft_real**2 + fft_imag**2)

print(fft_result[:10])

# For comparison, use numpy's built-in FFT
fft_numpy = np.fft.fft(signal)

print(fft_numpy[:10])

# Create frequency axis
freqs = np.fft.fftfreq(len(signal), 1/fs)

# Plot results
plt.figure(figsize=(12, 8))

# Time domain signal
plt.subplot(3, 1, 1)
plt.plot(t, signal)  # Show first 0.2 seconds
plt.title('Time Domain Signal (50 Hz + 200 Hz)')
plt.xlabel('Time (s)')
plt.ylabel('Amplitude')

# with open('ordis.txt') as f:
#     data = f.read().split(' ')
#     fft_result = [float(d) for d in data if d.strip()]
#     print(f"FFT Result Length: {len(fft_result)}")


# Our FFT magnitude spectrum
plt.subplot(3, 1, 2)
plt.plot(freqs[:len(freqs)], np.abs(fft_result)[:len(fft_result)])
plt.title('Our FFT - Magnitude Spectrum')
plt.xlabel('Frequency (Hz)')
plt.ylabel('Magnitude')
plt.xlim(0, 20_000)

# print(fft_result)
# print(len(fft_result))
# conjugate data
# like? 1 2 3 | 4 4 3 2 1
# i should divide by 2, but this will look better in graph
# print(fft_result[100], fft_result[2048-100])

# get max of fft_result
# max_index = np.argmax(np.abs(fft_result))
# max_freq = freqs[max_index]
# odd but max is num samples / 2
# had to play wth numbers, but got it
print(f"Max frequency: {max(fft_result)} Hz")
print(f"Min frequency: {min(fft_result)} Hz")

# reduce to 8 bins for better visualization
bin_size = int(len(fft_result) / 16)
reduce_spectrum = np.zeros(16)
for i in range(16):
    start = i * bin_size
    end = start + bin_size
    reduce_spectrum[i] = np.mean(np.abs(fft_result[start:end]))
print(f"Reduced Spectrum: {reduce_spectrum}")

# NumPy FFT for comparison
plt.subplot(3, 1, 3)
plt.plot(freqs[:len(freqs)], np.abs(fft_numpy)[:len(fft_numpy)])
plt.title('NumPy FFT - Magnitude Spectrum (for comparison)')
plt.xlabel('Frequency (Hz)')
plt.ylabel('Magnitude')
plt.xlim(0, 20_000)


plt.tight_layout()
plt.show()

# Verify our implementation matches NumPy's
max_error = np.max(np.abs(fft_result - fft_numpy))
print(f"Maximum error between our FFT and NumPy's FFT: {max_error:.2e}")
print(f"Peak frequencies detected: ~50 Hz and ~200 Hz (as expected!)")
