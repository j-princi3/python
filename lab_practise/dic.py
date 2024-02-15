# def swapping(dic):
#     newdic={}
#     same=list(dic.keys())
#     values=list(dic[same[0]].keys())
#     j=0
#     for i in dic[same[0]]:
#         duplicate_dic={}
#         duplicate_dic[same[0]]=dic[same[0]][i]
#         if j<len(values):
#             newdic[values[j]]=duplicate_dic
#             j+=1
#     return newdic
# # test_dict= {'Gfg': {"a": [1, 3, 7, 8],"b": [4, 9],"c" : [0, 7]}}
# test_dict = {'Gfg': {'best' : [1, 3, 4]}} 
# print(test_dict)
# print(swapping(test_dict))


print(4//2)
# def main(seq):
#     if seq==[]:
#         return "True"
#     else:
#         if seq[0]==-1*seq[len(seq)-1]:
#             true=[]
#             for i in range(1,len(seq)-1):
#                 true.append(seq[i])
#             if len(true)>2:
#                 if true[0]==true[len(true)//2-1] and true[len(true)//2]== true[len(true)]:
#                     return "True"
#                 else:
#                     return "False"
#             elif len(true)==2 and true[0]==-1*true[1]:
#                 return "True"
#             else:
#                 return "False"
#         else:
#             return "False"
    
# t = int(input())
# l=[]
# for i in range(1,t+1):
#     k = int(input())
#     sequence = list(map(int, input().split()))
#     if main(sequence)=="True":
#         l.append("Yes")
#     else:
#         l.append("No")
# for k in l:
#     print(k)
def main(true):
    if true==[]:
        return "True"
    else:
        for j in true:
            if -1*j in true:
                true.remove(j)
                true.remove(-1*j)
                print(true)
            else:
                return "False"
        if true[0]==true[1]:
            return "True"
        else:
            return "False"

t = int(input())
l=[]
for i in range(1,t+1):
    k = int(input())
    sequence = list(map(int, input().split()))
    if main(sequence)=="True":
        l.append("Yes")
    else:
        l.append("No")
for k in l:
    print(k)