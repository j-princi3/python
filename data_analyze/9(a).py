import pandas as pd
car_dataset=pd.read_csv("https://raw.githubusercontent.com/selva86/datasets/master/Cars93_miss.csv")
# null_not=car_dataset.isnull()
# print(null_not)
# print(car_dataset.isnull().sum().sum())


car_dataset['Min.Price']=car_dataset['Min.Price'].fillna(car_dataset['Min.Price'].mean())
car_dataset['Max.Price']=car_dataset['Max.Price'].fillna(car_dataset['Max.Price'].mean())

print(car_dataset)
