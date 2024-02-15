n=list(map(int,input().split()))
k=int(input())

# for i in range(0,k):
dic={}

l=[]
for i in n:
    dic[i]=n.count(i)
freq=dict(sorted(dic.items(),reverse=True,key=lambda item:(item[1],item[0])))

l=list(freq.keys())
print(l[:k])