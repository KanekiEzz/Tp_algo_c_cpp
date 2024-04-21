import matplotlib.pyplot as plt
import numpy as np

f = 5
A = 1
duration = 1
fs = 1000

t = np.linspace(0, duration, int(fs * duration))

sinusoidal_signal = A * np.sin(2 * np.pi * f * t)

square_signal = A * np.sign(np.sin(2 * np.pi * f * t))

superposed_signal = sinusoidal_signal + square_signal

scaled_signal = 0.5 * sinusoidal_signal

plt.figure(figsize=(12, 6))

plt.subplot(2, 1, 1)
plt.plot(t, sinusoidal_signal, label='Signal sinusoïdal', color='blue')
plt.plot(t, square_signal, label='Signal carré', color='red')
plt.plot(t, superposed_signal, label='Superposition', color='green')
plt.xlabel('Temps (s)')
plt.ylabel('Amplitude')
plt.title('Superposition des Signaux')
plt.legend()

plt.subplot(2, 1, 2)
plt.plot(t, sinusoidal_signal, label='Signal sinusoïdal original', color='blue')
plt.plot(t, scaled_signal, label='Signal sinusoïdal multiplié par 0.5', color='orange')
plt.xlabel('Temps (s)')
plt.ylabel('Amplitude')
plt.title('Multiplication du Signal Sinusoïdal par un Scalaire')
plt.legend()

plt.tight_layout()
plt.show()
