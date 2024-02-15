# l=[1, 1, 64 ,1, 64, 23, 64, 22, 22, 22]
# l=list(map(int,input().split()))
# print(l)
# i=0
# # for i in range(0,len(l)):
# while i<len(l)-2:
#     if l[i]==l[i+1] and l[i+2]==l[i] :
#         print(l[i])
#         i+=2
#     i+=1


# def check(inner,K,N):
#     if K in inner:
#         n=0
#         for i in inner:
#             if i ==K:
#                 n+=1
#         if n>=N:
#             return True
#     return False
# test_list = [(4, 5, 5, 4), (5, 4, 3)]
# test_list=[]
# k=int(input())
# for i in range(0,k):
#     l=tuple(map(int,input().split()))
#     test_list.append(l)
# K = 5
# N = 3
# test=[]
# for i in range(0,len(test_list)):
#     l=check(list(test_list[i]),K,N)
#     if l==True:
#         test.append(test_list[i])
# print(test)


# test_str1 = "GFG"
# test_str2 = "FGG" 
# test_str1 = 'geeks'
# test_str2 = 'eksge' 

# l=[]
# k1=[]
# for i in range(0,len(test_str1)):
#     word=""
#     for j in range (i,len(test_str1)):
#         word=test_str1[j]+word
#     for k in range (0,i):
#         word=test_str1[k]+word
    
#     k1.append(word[::-1])
#     l.append(word)
# print(l)
# print(k1)
# if test_str2 in l or test_str2 in k1:
#     print("True")
# else:
#     print("False")

# import random 
# k=int(input())
# s=""
# for i in range(0,k):
#     s=str(random.randint(0,1))+s
# print(s)


# bin_data ='10001111100101110010111010111110011'
# s=""
# for i in range(0,len(bin_data),8):
#     bytes=bin_data[i:i+8]
#     dec=int(bytes,2)
#     s=s+chr(dec)
# print(s)
# binary_value = "10001111100101110010111010111110011"  # Example binary value
# text_value = ""
# for i in range(0, len(binary_value), 8):
#     byte = binary_value[i:i+8]
#     decimal_value = int(byte, 2)
#     ascii_character = chr(decimal_value)
#     text_value += ascii_character

# print(text_value)  # This will print "H"

# test_string = "geekforgeeks"
# print(''.join(sorted(test_string,reverse=True)))