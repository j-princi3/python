
n=input()
# low,cap,spe,num=0,0,0,0
# if len(n)>4 and len(n)<=15:
#     for i in n:
#         if i>='a' and i<='z':
#             low=1
#         elif i>='A' and i<='Z':
#             cap=1
#         elif i in['*','@','#']:
#             spe=1
#         elif ord(i)>=48 and ord(i)<=57:
#             num=1
#         else:
#             print("invalid special character")
#             spe=0
#             break
# else:
#     print("invalid length of string")
# if low==1 and cap==1 and spe==1 and num==1:
#     print("valid")


# l=[]
# for i in n:
#     l.append(i)
# for i in range(0,len(l)):
#     if l[i]=='.':
#         l[i]=l[len(l)-i-1]
# p=''
# for i in l:
#     p+=i
# if p==p[::-1]:
#     print("possible")
# else:
#     print("impossible")

n=n+' '
l=[]
p=''

for i in range(0,len(n)):
    if ord(n[i])>= 48 and ord(n[i])<=57:
        p+=n[i]
    elif p!='' :
        l.append(int(p))
        p=''
print(l)
l=sorted(l)
print(l)
print(l[len(l)-1])