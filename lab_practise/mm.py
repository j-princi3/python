# import pyttsx3

# eng = pyttsx3.init()
# eng.setProperty('rate',145)
# eng.say('Hello')
# eng.runAndWait()

import matplotlib.pyplot as plt
# plt.plot([[1,2,3],[96,50,80]],[8,9,0],[])
plt.title('Report')
plt.plot(['maths','science','social'],[49,50,90])

plt.plot(['maths','science','social'],[40,58,60])

plt.plot(['maths','science','social'],[91,55,89])
plt.legend(['riya','priya','dev'])
plt.xlabel('Subject')
plt.ylabel('Marks')
plt.show()
# plt.close()
