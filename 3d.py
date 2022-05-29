from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
import numpy as np


Data=np.loadtxt("/home/debian/cpp2/projekt/135010.dat")

x=np.array(Data[:,0])
y=np.array(Data[:,1])
z=np.array(Data[:,2])

fig=plt.figure()


ax = fig.gca(projection='3d')
ax.plot_trisurf(x, y, z, linewidth=0.2, antialiased=True)
plt.show()
