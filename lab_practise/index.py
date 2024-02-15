import numpy as np

# arr1=np.empty((2,4,2),dtype=int)
# arr2=np.full((2,4),55,dtype=int)
# arr3=np.zeros((5,6),dtype=int)
# arr4=np.ones((2,2))
# arr=np.array([[10.5,22,5,3.8],[np.nan,np.nan,54.3,9]])
# print(arr[~np.isnan(arr).any(axis=1)])
# print(arr1)
# print(arr2)
# print(arr4)


arr=np.array([[[2,2,2],[2,2,2]]])
print(arr)
print(arr.shape)
print(np.squeeze(arr).shape)
print(np.squeeze(np.squeeze(arr)).shape)