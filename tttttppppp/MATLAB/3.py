import matplotlib.pyplot as plt
import numpy as np

f = 5 
duration = 2 
fs_high = 1000
fs_list = [10, 20, 50] 


t_continuous = np.linspace(0, duration, int(fs_high * duration))


continuous_signal = np.sin(2 * np.pi * f * t_continuous)

sampled_signals = {}
for fs in fs_list:
    t_sampled = np.arange(0, duration, 1 / fs)
    sampled_signal = np.sin(2 * np.pi * f * t_sampled)
    sampled_signals[fs] = (t_sampled, sampled_signal)

plt.figure(figsize=(12, 8))

plt.subplot(2, 2, 1)
plt.plot(t_continuous, continuous_signal)
plt.title('Signal Sinusoïdal Continu (1000 Hz)')
plt.xlabel('Temps (s)')
plt.ylabel('Amplitude')

for i, (fs, (t_sampled, sampled_signal)) in enumerate(sampled_signals.items(), start=2):
    plt.subplot(2, 2, i)
    plt.plot(t_sampled, sampled_signal, marker='o', linestyle='None')
    plt.plot(t_continuous, continuous_signal, color='red')
    plt.title(f'Signal Sinusoïdal Échantillonné ({fs} Hz)')
    plt.xlabel('Temps (s)')
    plt.ylabel('Amplitude')

plt.tight_layout()
plt.show()
