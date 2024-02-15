# i=int(input())
# dic=[]
# team={}
# for j in range(0,i):
#     n=list(map(str,input().split(';')))
#     dic.append(n)
#     if n[0] not in team:
#         team[n[0]]={"played":[],"win":[],"draw":[],"loss":[]}
#     if n[1] not in team:
#         team[n[1]]={"played":[],"win":[],"draw":[],"loss":[]}

# for k in dic:
#     if k[2].lower()=="loss":
#         team[k[0]]["loss"].append(1)
#         team[k[1]]["win"].append(1)
#         team[k[0]]["played"].append(1)
#         team[k[1]]["played"].append(1)
#     if k[2].lower()=="win":
#         team[k[0]]["win"].append(1)
#         team[k[1]]["loss"].append(1)
#         team[k[0]]["played"].append(1)
#         team[k[1]]["played"].append(1)
#     if k[2].lower()=="draw":
#         team[k[0]]["draw"].append(1)
#         team[k[1]]["draw"].append(1)
#         team[k[0]]["played"].append(1)
#         team[k[1]]["played"].append(1)
# point={}
# for j in team:
#     team[j]={'played':sum(team[j]["played"]),'win':sum(team[j]["win"]),'draw':sum(team[j]["draw"]),'loss':sum(team[j]["loss"]),"points":(team[j]["win"])*3+team[j]["draw"]}
#     point[j]=(team[j]["win"])*3+team[j]["draw"]
# # print(team)
# dict(sorted(point.items()))
# for i in point:
#     print(team[i])

# for j in range(10,1,-1):
#     print(j)
s="abbcccbbbcaaccbababcbcabca"
l=[]
if len(s)>=2:
    for i in range(0,len(s)-1):
        for j in range(len(s),i,-1):
            q=s[i:j]
            if q==q[::-1] :
            # print(s[i:j])
                l.append(q)
    max=len(l[0])
    q=l[0]
    for k in range(1,len(l)):
        if max<len(l[k]):
            max=len(l[k])
            q=l[k]
    print(l)
    print(q)
else:
    print(s)
