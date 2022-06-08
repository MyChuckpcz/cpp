import numpy as np
from scipy.interpolate import interp1d
import matplotlib.pyplot as plt

Data=np.loadtxt('test.txt')
x=np.array(Data[:,1])
y=np.array(Data[:,2])

f=interp1d(x,y,kind='quadratic')
xnew=np.linspace(x.min(),x.max(),200)
ynew=f(xnew)


plt.plot(x,y,'o',xnew,ynew)
plt.show()