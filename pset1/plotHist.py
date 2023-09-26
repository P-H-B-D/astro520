import numpy as np
import matplotlib.pyplot as plt

data = np.fromfile('bins.bin', dtype=np.int32)
print([int(x) for x in data]) #frequencies of numbers 0-9

axisLabels=np.arange(0,10)
print(axisLabels)

plt.title("Frequency of RNG Numbers [0-9], n=1e9")
plt.xlabel("Number")
plt.ylabel("Counts")

plt.bar(axisLabels, data)
plt.show()