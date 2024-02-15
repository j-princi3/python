# import matplotlib.pyplot as plt
# import pandas as pd

# tab={'Months':['Jan', 'Feb', 'Mar', 'April', 'May', 'June', 'July',  'Aug', 'Sep', 'Oct', 'Nov',' Dec'],'Sales amount':[3059, 1234, 3988, 2112, 4627, 4723, 4201, 1844, 4017, 2563, 3405, 4775],'times':[0,0,0,0,3000,0,3000,0,3000,0,0,0]}

# database=pd.DataFrame(tab)
# # plt.scatter(database['Months'],database['Sales amount'])

# # plt.plot(database['Months'],database['Sales amount'])

# # plt.scatter(database['Months'],database['times'],marker='x')

# # plt.boxplot(database['Sales amount'])

# # plt.pie(database['Sales amount'])

# plt.show()
# print(database)

# import matplotlib.pyplot as plt
# import pandas as pd
# data={2014:[20,1,5,8,3],2015:[5,8,6,5,4],2016:[8,6,2,1,3],2017:[9,5,6,3,4]}
# x=['chat','reels','studying','read','sleep']
# df=pd.DataFrame(data)
# # # print(df)
# # for i in data:
# #     plt.plot(i,data[i])
# plt.legend()

# import matplotlib.pyplot as plt
# x=[1,2,3,4,5,6,7]
# y=[1,2,1,2,1,2,1]
# # plt.errorbar(x,y,xerr=[i>=5 for i in x],fmt='o')
# plt.errorbar(x,y,xerr=0.3,yerr=0.4,fmt='o')

# # plt.plot(x,y)
# plt.show()