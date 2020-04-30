#import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

x,y=np.loadtxt("dataIc2.txt",unpack=True,delimiter=',')
plt.plot(x,y)
plt.title("Grafik nilai arus C2")
plt.xlabel("waktu (s)")
plt.ylabel("Arus (A)")
plt.show()

x,y = np.loadtxt("dataIl2.txt", unpack=True, delimiter=',')
plt.plot(x,y)
plt.title("Grafik nilai arus L2")
plt.xlabel("waktu (s)")
plt.ylabel("Arus (A)")
plt.show()

x,y = np.loadtxt("dataVc2.txt", unpack=True, delimiter=',')
plt.plot(x,y)
plt.title("Grafik nilai Tegangan C2")
plt.xlabel("waktu (s)")
plt.ylabel("Tegangan (V)")
plt.show()

x,y = np.loadtxt("dataVl2.txt", unpack=True, delimiter=',')
plt.plot(x,y)
plt.title("Grafik nilai Tegangan L2")
plt.xlabel("waktu (s)")
plt.ylabel("Tegangan (V)")
plt.show()
