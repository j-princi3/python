i=list(map(int,input().split()))
matrix=[]
matrix.append(i)
for k in range(0,len(i)-1):
    matrix.append(list(map(int,input().split())))
for a in range(0,len(matrix)):
    for b in range(0,len(matrix[a])):
        if a<b:
            matrix[a][b]=0
for i in matrix:
    print(i)