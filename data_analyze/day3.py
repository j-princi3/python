# with open("pp/samplefile.txt","r") as file:
#     p=file.readlines()
# with open("pp/sample.txt","w") as file1:
#     k=file1.writelines(p)
#     k=file1.write("import os")
# print("successfull")
# k=0
# for i in p:
#     k+=len(i.split())
# print(k)
    
import os
# os.getcwd(): This command returns the current working directory
# os.chdir(path): This command changes the current working directory to the specified path.
# os.listdir(path): This command returns a list of all files and directories in the specified path.
# os.mkdir(path): This command creates a new directory at the specified path.
# os.makedirs(path): This command creates a new directory and any intermediate directories in the specified path.
# os.remove(path): This command removes the file at the specified path.
# os.rmdir(path): This command removes an empty directory at the specified path.
# shutil.rmtree(path): This command removes a directory and all its contents recursively.
# os.path.exists(path): This command checks if a file or directory exists at the specified path and returns a boolean value.
# os.path.isfile(path): This command checks if the specified path points to a file and returns a boolean value.
# os.path.isdir(path): This command checks if the specified path points to a directory and returns a boolean value.

# print(os.getcwd())
# os.chdir(r"C:\Users\jainp\OneDrive\Desktop\code\letc\audi")

# print(os.getcwd())
# print(os.listdir(r"C:\Users\jainp\OneDrive\Desktop\code\letc\audi"))
# os.remove(r"C:\Users\jainp\OneDrive\Desktop\code\letc\audi\princi.py\kyu.py")
# os.rmdir(r"C:\Users\jainp\OneDrive\Desktop\code\letc\audi\princi.py")
# os.mkdir(r"C:\Users\jainp\OneDrive\Desktop\code\letc\audi\princi.py")

# print(os.listdir(r"C:\Users\jainp\OneDrive\Desktop\code\letc\audi"))


# import pandas as pd
# df=pd.read_csv('pp/results.csv')
# # print(df)
# # for i in df:
# #     print(df[i][0][0])
# data=df
# k=pd.DataFrame(data)
# k.to_csv('pp/output.csv')



import numpy as np
p=np.genfromtxt('pp/results.csv',delimiter="," ,dtype=None,  encoding='utf-8')
# print(p)
data=np.array(p)
print(type(data))
# print(data.shape())
data=np.reshape(data,(64,5))
# print(data)
# np.savetxt("pp/path.csv",data)