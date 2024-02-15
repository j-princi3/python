i =list(map(int,input().split()))
new=[]
# for j in range(0,len(i)):
#     if j in i:
#         new.append(j)
#     else:
#         new.append(-1)
# print(new)



# new=i[::-1]
# for k in range(0, len(i)):
#     print(new[k]+i[k])

def min_moves(A):
    l = []
    for i in A:
        l.append(i)
    l.sort()
    moves = 0
    for num in A:
        if num == l[0]:
            l.pop(0)
        else:
            moves += 1
    return moves
A = [int(x) for x in input("Enter the numbers seperated by spaces :").split()]
print("Minimum moves ->", min_moves(A))
