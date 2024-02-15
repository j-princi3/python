import matplotlib.pyplot as plt
x=[x for x in range(1,5001)]
y=[y*y*y for y in x]
# print(y)

plt.scatter(x,y,c=y,s=10,cmap=plt.cm.BuGn)
plt.show()
