# n=float(input())
# v1=float(input())
# v2=float(input())

# t1=((2**1/2)*2*n)/v1
# t2=n/v2
# if t1<t2:
#     print("walk")
# else:
#     print(t1,t2)
#     print("cab")

X,Y=0,0
i=int(input())
l=[]
for i in range(0,i):
    l.append(input())
for i in l:
    i=i.upper()
    d=i.split()
    if d[0]=='UP':
        Y+=int(d[1])    
    elif d[0]=='DOWN':
        Y-=int(d[1])
    elif d[0]=='RIGHT':
        X+=int(d[1])
    elif d[0]=='LEFT':
        X-=int(d[1])
    else:
        X+=0
        Y+=0
print(round(((X**2)+(Y**2))**1/2))