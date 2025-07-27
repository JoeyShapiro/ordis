import numpy as np
import matplotlib.pyplot as plt

def create_log_frequency_bins(fs, n_fft, n_bins=16, fmin=20, fmax=None):
    """
    Create logarithmically spaced frequency bins
    """
    if fmax is None:
        fmax = fs / 2
    
    # Create log-spaced bin edges
    bin_edges = np.logspace(np.log10(fmin), np.log10(fmax), n_bins + 1)
    
    # Convert to bin indices
    freq_resolution = fs / n_fft
    bin_indices = (bin_edges / freq_resolution).astype(int)
    
    # Make sure we don't exceed FFT bins
    bin_indices = np.clip(bin_indices, 0, n_fft // 2)
    
    return bin_edges, bin_indices

def group_fft_logarithmic(magnitude, fs, n_bins=16, fmin=20):
    """
    Group FFT bins logarithmically to match human hearing
    """
    n_fft = len(magnitude) * 2  # Reconstruct original FFT size
    bin_edges, bin_indices = create_log_frequency_bins(fs, n_fft, n_bins, fmin)
    
    grouped_spectrum = []
    bin_centers = []
    
    for i in range(n_bins):
        start_idx = bin_indices[i]
        end_idx = bin_indices[i + 1]
        
        if end_idx > start_idx:
            # Average the magnitudes in this frequency band
            band_magnitude = np.mean(magnitude[start_idx:end_idx])
            grouped_spectrum.append(band_magnitude)
            
            # Calculate center frequency for this bin
            center_freq = np.sqrt(bin_edges[i] * bin_edges[i + 1])
            bin_centers.append(center_freq)
        else:
            grouped_spectrum.append(0)
            bin_centers.append(bin_edges[i])
    
    return np.array(grouped_spectrum), np.array(bin_centers), bin_edges

def plot_fft_comparison(signal, fs, n_bins=16):
    """
    Plot FFT in both linear and logarithmic forms
    """
    # Compute FFT
    fft_result = np.fft.fft(signal)
    magnitude = np.abs(fft_result[:len(fft_result)//2])
    freqs_linear = np.fft.fftfreq(len(signal), 1/fs)[:len(signal)//2]
    
    # Group into logarithmic bins
    log_spectrum, log_centers, log_edges = group_fft_logarithmic(magnitude, fs, n_bins)
    
    # Create plots
    fig, axes = plt.subplots(2, 2, figsize=(15, 10))
    
    # Time domain signal
    t = np.linspace(0, len(signal)/fs, len(signal))
    axes[0, 0].plot(t, signal)
    axes[0, 0].set_title('Time Domain Signal')
    axes[0, 0].set_xlabel('Time (s)')
    axes[0, 0].set_ylabel('Amplitude')
    axes[0, 0].grid(True, alpha=0.3)
    
    # Linear frequency spectrum
    axes[0, 1].plot(freqs_linear, magnitude)
    axes[0, 1].set_title('Linear Frequency Spectrum')
    axes[0, 1].set_xlabel('Frequency (Hz)')
    axes[0, 1].set_ylabel('Magnitude')
    axes[0, 1].set_xlim(20, fs/2)
    axes[0, 1].grid(True, alpha=0.3)
    
    # Linear spectrum with log frequency axis
    axes[1, 0].semilogx(freqs_linear[1:], magnitude[1:])  # Skip DC
    axes[1, 0].set_title('Log Frequency Axis (all bins)')
    axes[1, 0].set_xlabel('Frequency (Hz)')
    axes[1, 0].set_ylabel('Magnitude')
    axes[1, 0].set_xlim(20, fs/2)
    axes[1, 0].grid(True, alpha=0.3)
    
    # Logarithmic binned spectrum
    axes[1, 1].bar(range(len(log_spectrum)), log_spectrum, width=0.8, alpha=0.7)
    axes[1, 1].set_title(f'Logarithmic Bins ({n_bins} bands)')
    axes[1, 1].set_xlabel('Frequency Band')
    axes[1, 1].set_ylabel('Average Magnitude')
    
    # Add frequency labels to log bins
    tick_labels = [f"{freq:.0f}" for freq in log_centers]
    axes[1, 1].set_xticks(range(len(log_spectrum)))
    axes[1, 1].set_xticklabels(tick_labels, rotation=45, fontsize=8)
    axes[1, 1].grid(True, alpha=0.3)
    
    plt.tight_layout()
    plt.show()
    
    # Print bin information
    print(f"\nLogarithmic frequency bins:")
    print(f"{'Bin':<3} {'Freq Range (Hz)':<15} {'Center (Hz)':<12} {'Magnitude':<10}")
    print("-" * 50)
    for i, (center, mag) in enumerate(zip(log_centers, log_spectrum)):
        freq_range = f"{log_edges[i]:.0f}-{log_edges[i+1]:.0f}"
        print(f"{i+1:<3} {freq_range:<15} {center:.0f}Hz{'':<7} {mag:.2f}")
    
    return log_spectrum, log_centers

# Create test signal with multiple frequencies
fs = 44100  # Sample rate
duration = 1.0  # seconds
t = np.linspace(0, duration, int(fs * duration), endpoint=False)

# Multi-frequency test signal (bass, mid, treble)
signal = (np.sin(2 * np.pi * 60 * t) +      # Bass
          0.7 * np.sin(2 * np.pi * 440 * t) +   # Mid (A4 note)
          0.5 * np.sin(2 * np.pi * 2000 * t) +  # Upper mid
          0.3 * np.sin(2 * np.pi * 8000 * t))   # Treble

# Add some noise
signal += 0.1 * np.random.randn(len(signal))

with open('ordis.txt') as f:
    data = f.read().split(' ')
    signal = [float(d) for d in data if d.strip()]
    print(f"FFT Result Length: {len(signal)}")

# Plot comparison
log_spectrum, log_centers = plot_fft_comparison(signal, fs, n_bins=256)

print(f"\nSample rate: {fs} Hz")
print(f"Signal length: {len(signal)} samples ({len(signal)/fs:.2f} seconds)")
print(f"Frequency resolution: {fs/len(signal):.2f} Hz per bin")