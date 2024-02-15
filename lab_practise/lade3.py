# import sympy as sp
# a=sp.Matrix([[1,2,3],[4,5,6],[7,8,9]])
# eigen= a.eigenvects()
# # print(eigen)
# for i in range(3):
#     print(eigen[i][0])
#     print(eigen[i][2])


# import numpy as np
# a=np.array([[1,2],[3,4]])
# d=np.linalg.det(a)
# i=np.eye(2)
# t=np.trace(a)
# print(a@a-a*t+d*i)


# import numpy as np
# a=np.array([[1,3,5],[0,2,7],[0,0,9]])
# d=round(np.linalg.det(a))
# t=np.trace(a)
# i=np.eye(3)
# s=round(np.linalg.det(np.array([[2,7],[0,9]]))+np.linalg.det(np.array([[1,5],[0,9]]))+np.linalg.det(np.array([[1,3],[0,2]])))
# print(a@a@a-t*(a@a)+s*a-d*i)

# import sympy as sp
# import numpy as np

# a=sp.Matrix([[1,1,1],[0,2,1],[-4,4,3]])
# eig=a.eigenvects()
# b=[]
# for i in range (3):
#     b.append(np.array(eig[i][2]).reshape(3))
# b=np.array(b,dtype=float)
# p=b.T
# print(p)
# pinv=np.linalg.inv(p)
# print(pinv)
# print(pinv@a@p)


# from sympy import *
# import numpy as np
# x,y,z=symbols('x y z')
# f=x*y*z
# p=np.array([diff(f,x),diff(f,y),diff(f,z)])
# print(p)


# import numpy as np
# from sympy import *
# x,y,z=symbols('x y z')
# f1=x**2
# f2=y*9+z
# f3=z
# s=0
# a=np.array([diff(f1,x),diff(f2,y),diff(f3,z)])
# for i in range(3):
#     s=s+a[i]
# print(s)

# import numpy as np
# from sympy import *
# x,y,z=symbols('x y z')
# f1=x**2
# f2=y*9+z
# f3=z
# points={x:1,y:-1,z:2}
# a=diff(f3,y)-diff(f2,z)
# b=-(diff(f3,x)-diff(f1,z))
# c=diff(f2,x)-diff(f1,y)
# p=np.array([a.subs(points),b.subs(points),c.subs(points)])
# print(p)

from sympy import *
import numpy as np

def norm(vec):
    s=0
    for i in vec:
        s=s+i**2
        print(s)
    return (s)**0.5
vector=np.array([1,2,2])
x,y,z=symbols('x y z')
points={x:2,y:-1,z:1}

f=x*y**2 + y*z**2

grad=np.array([diff(f,x).subs(points),diff(f,y).subs(points),diff(f,z).subs(points)])
nor=norm(vector)
vec=[]
for i in range(0,3):
    vec.append(vector[i]/nor)
print(grad)
print(nor)
print(vec)

    
print(np.dot(grad,vec))

