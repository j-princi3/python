import numpy as np
arr=np.array( [[2,8,9,4],
       [9,4,9,4],
       [4,5,9,7],
       [2,9,4,3],
       [9,5,4,7]])
seq=list(map(int,input().split()))
occ=0
print(seq)
for i in arr:
    flag=0
    for j in i:
        if j in seq:
            flag+=1
        else:
            flag=0
        if flag==len(seq):
            occ+=1
print(occ)
        