
f=open("kmit.txt","r")
emptydi={}
data=f.readlines()
for i in data:
    data=data.split(",")
    emptydi[int(data[0])]=i[1:]
    print(emptydi)


