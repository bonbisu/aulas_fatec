import numpy as np
import matplotlib.pyplot as plt

x=np.linspace(0, 100, 100)


plt.plot(x**2,x**3, label='função quadratica')
plt.ylabel('y')
plt.xlabel('x')
plt.title('Grafico 1')
plt.legend()
plt.show()