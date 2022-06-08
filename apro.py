import matplotlib.pyplot as plt
import numpy as np


Data=np.loadtxt('test.txt')
x=np.array(Data[:,1])
y=np.array(Data[:,2])

plt.scatter(x,y)

linear_model=np.polyfit(x,y,1)
linear_fit=np.poly1d(linear_model)
x_s=np.linspace(x.min(),x.max(),200)
plt.plot(x_s,linear_fit(x_s),color='red')
plt.show()