import csv
d={}
n=input()
n=n.upper()
l=[]
with open("practise/results.csv","r") as file:
    read=csv.reader(file)
    for i in read:
        d[i[0]]=i[1]
        l.append(i[1])
if n in d or n in l:
    for j in d:
        if j==n:
            print(d[j])
            break
        if d[j]==n:
            print(j)
            break
else:
    print("invalid")