import numpy as np

days=np.random.randint(0,10,365)

summer=days[32:124]#1st march to 1st june
rainy=days[124:246]#1st june to 1st november
winter=np.concatenate((days[246:366] , days[:32]), axis=0)#1st november to 28th feb


print("median of precipitation on rainy days",np.median(rainy),"inches")
print("median precipitation on summer days",np.median(summer),"inches")
print("Maximum precipitation on summer days",np.max(summer),"inches")
print("Minimum precipitation on summer days",np.min(summer),"inches")
print("median precipitation on non-summer rainy days",np.median(np.concatenate((winter,rainy) , axis=0)),"inches")

max_pre = days == np.max(days)
print(max_pre.dtype,max_pre.size)
for i in range(0,days.size):
    if max_pre[i]=='True':
        print(days[i])

#convolution
#indexing
#aggregation
#fancy indexing
# array of order (100*100) , then indices order is (3*3) , then after fancy indexing id (3*3)
#when using fancy indexing,
#boardcasting condition
#x=np.arange(12).reshape(3,4)
#print all the data which lies between 1 to 100, in between 5 and 100
x=np.arange(12).reshape(3,4)
print(x)
#median of 3 column
print(x[0,:3])
print(np.median(x[:2]))
# numbers greater than 10
# print(x[0 ,[:3]]>10)
# sorting array
#sorting array using numpy
#randomstate
#excel sorting(2d array , sorting on column,with sorting the names )
#record structure
#structured array(attribute represents coloum in excel sheet)



# row=[1,2,3]
# col=[0,1,3]
# print(x[row[0:1],col[:]])

# print(x[2,[0,1]])
