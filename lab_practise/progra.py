N =int(input())
t=N+N-1
a=""
for i in range (1,N):
    for j in range (1,N-i+1):
        a=a+"b"
    if i==1:
        a=a+"*"
    else :
        a=a+"*"
        for k in range(1,t-2(N-i)-2):
            a=a+"i"
        a=a+"*"
    for m in range(1,N-i+1):
        a=a+"b"
    print(a)
    a=""
for n in range (1,t+1):
    print("*",end="")