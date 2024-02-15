# # https://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data
# # https://raw.githubusercontent.com/selva86/datasets/master/Cars93_miss.csv
import pandas as pd
import numpy as np
# df=pd.DataFrame("pp/results.csv")
df=pd.read_csv("pp/results.csv")
m=df['SGPA']
for i in range(0,len(m)):
    if m[i]!='-':
        m[i]=float(m[i])
    else:
        m[i]=0.0
marks=np.array([df['Name'],m])

# print(df.loc[df.SGPA>=8.0],['SGPA'])
print(marks)
print(marks[:,1]>=8.0)

# l=[]
# l1 = [2,4,3]
# l2 = [5,6,4]
# nums = [2,7,11,15]
# target = 9
# for i in nums[::-1]:
#     print(i)
# l=[]
# num1=""
# num2=""
# print(l1[::-1])
# # for i in l1[::-1]:
#     num1+=str(i)
# for j in l2[::-1]:
#     num2+=str(j)
#     num=str(int(num1)+int(num2))
# for i in num[::-1]:
#     l.append(int(i))
# print(l)

