# import numpy as np
# from scipy import linalg as ln
# arr=np.array([[1,3,5],[0,2,7],[0,0,9]])
# trace=np.trace(arr)
# det=round(ln.det(arr))
# # print(det)
# I=np.eye(3)
# s=ln.det(np.array([[2,7],[0,9]]))+ln.det(np.array([[1,5],[0,9]]))+ln.det(np.array([[1,3],[0,2]]))
# print(arr@arr@arr-trace*arr@arr+s*arr-det*I)

# import sympy as sp
# import numpy as np

# A=sp.Matrix([[1,1,1],[0,2,1],[-4,4,3]])
# eig=A.eigenvects()
# print(eig)

# for i in range (3):
#     print(eig[i][0])
#     print(eig[i][2])

# A=np.array([[1,1,1],[0,2,1],[-4,4,3]])
# B=np.array([[-1/2,-1,1],[1,1,0],[1,1,1]])
# P=B.T
# print(P)
# inverse=np.linalg.inv(P)
# d=inverse@A@P
# print(d)

# import numpy as np
# from scipy import linalg as lg
# A=np.array([[1,2],[3,4],[5,6]])
# U,s,VT=lg.svd(A)
# print(s)

# from sympy import *
# x,y=symbols('x y')
# f=x**2*y+y**3
# print(diff(f,x))

