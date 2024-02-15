# from sympy import *
# x,y=symbols("a,b")
# function=x**2*y**3+12*y**4
# print(diff(function,x,x))


import csv

# Specify the CSV file's name
filename = "example.csv"

# Initialize an empty list to store the data
data = []

# Read data from the CSV file
with open(filename, mode="r", newline="") as file:
    reader = csv.reader(file)
    for row in reader:
        data.append(row)

# Display the loaded data
for row in data:
    print(row)
