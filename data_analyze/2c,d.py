n=int(input())
# for i in range(2,n):
#     if n%i==0:
#         flag=0
#         for j in range(2,i):
#             if i%j==0:
#                 flag=1
#                 break
#         if flag==0:
#             print(i,end=" ")
l=[]
def prime(n):
    flag=0
    for j in range(2,n):
        if n%j==0:
            flag=1
            break
    if flag==0:
        return n
flag=0
for i in range(2,n):
    if n%i==0:
        n1=prime(i)
        n2=prime(int(n/i))
        l.append((n1,n2))
        if n1!=n2 and (n2,n1) not in l:
            flag=1
            print(n1,n2)
            print("semi prime")
if flag==0:
    print("not")