import matplotlib.pyplot as plt
import numpy as np


f = 5
A = 1
duration = 1
fs = 1000

t_sin = np.linspace(0, duration, int(fs * duration))
sinusoidal_signal = A * np.sin(2 * np.pi * f * t_sin)

t_square = np.linspace(0, duration, int(fs * duration))
square_signal = A * np.sign(np.sin(2 * np.pi * f * t_square))

plt.plot(t_sin, sinusoidal_signal, label='Signal sinusoïdal', color='blue')
plt.plot(t_square, square_signal, label='Signal carré', color='red')
plt.xlabel('Temps (s)')
plt.ylabel('Amplitude')
plt.title('Signaux sinusoïdal et carré')
plt.legend()
plt.grid(True)
plt.show()
