# GRAPH USING MATPLOTLIB

# before using matplotlib you must install it using pip:
# pip install matplotlib

# GRAPH USING MATPLOTLIB

import matplotlib.pyplot as plt

def plot_graph(x, y):
    plt.plot(x, y)
    plt.xlabel('X-axis')
    plt.ylabel('Y-axis')
    plt.title('Graph of Y vs X')
    plt.grid()
    plt.show()

# example data
x = [1,2,3,4,5]
y = [2,4,6,8,10]

plot_graph(x, y)