import pandas as pd
dataset=pd.read_csv("https://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data",names= ['sepal_length', 'sepal_width', 'petal_length', 'petal_width', 'class'])
# print(dataset)
# for i in dataset:
#     length=i[0]
print("Mean=",dataset['sepal_length'].mean())
print("Median=",dataset['sepal_length'].median())
print("Standard deviation=",dataset['sepal_length'].std())
print(type(dataset))
# for i in dataset:
#     print(i)
iris_sorted=dataset[dataset['petal_length']>1.5 ]
iris_final=iris_sorted[iris_sorted['sepal_length']<5.0]
print(iris_final)
# result_data=dataset.sort_values[by=['petal_length','sepal_length']]

