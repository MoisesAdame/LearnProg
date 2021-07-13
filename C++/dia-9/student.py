import matplotlib
import matplotlib.pyplot as plt
import numpy as np

study =[2,2,2,3,2,2,2,2,2,2,2,3,1,2,3,1,3,2,1,1,2,1,2,2,3,1,1,1,2,2,2,2,2,2,1,1,3,3,3,1,2,1,2,1,2,2,2,4,2,2,2,2,1,1,1,2,2,2,2,2,2,1,2,3,2,2,4,4,2,4,4,4,2,1,2,2,4,4,1,2,1,3,2,2,2,2,2,3,2,2,3,1,2,2,4,4,1,2,1,3,1,3,1,2,2,4,4,3,4,3,1,3,2,1,2,2,2,1,2,1,2,4,2,1,2,1,2,2,1,1,3,1,1,1,2,3,2,1,2,1,4,1,3,1,1,2,2,2,1,1,1,1,3,1,1,2,1,1,1,2,1,2,1,1,2,1,2,2,2,2,1,2,2,2,2,2,2,2,1,2,2,2,2,2,2,2,1,2,2,2,2,2,2,1,1,2,1,1,1,2,2,2,2,1,4,3,2,2,1,3,4,2,2,2,1,2,2,2,1,3,2,3,2,2,3,2,2,2,2,3,2,2,2,2,2,3,2,1,2,2,2,2,1,1,3,1,1,1,2,1,1,2,1,1,1,1,4,2,2,4,2,2,3,3,3,2,2,2,2,2,2,4,2,2,2,2,2,1,2,1,1,1,4,2,2,2,3,3,3,2,2,3,2,4,3,1,2,2,4,1,2,1,3,4,2,2,1,1,2,2,2,2,2,2,3,3,2,3,3,2,2,2,3,3,3,3,1,1,3,3,4,3,2,2,4,3,3,2,4,2,3,2,2,2,3,3,3,3,3,1,2,2,1,1,2,2,2,2,1,3,2,2,2,2,2,2,3,1,1,2,2,1,3,1,3,3,3,2,2,2,2,1,2,1,1,3,1,3,2,2,2,1,1,1,1]
sex=["F","F","F","F","F","M","M","F","M","M","F","F","M","M","M","F","F","F","M","M","M","M","M","M","F","F","M","M","M","M","M","M","M","M","M","F","M","M","F","F","F","M","M","M","F","F","F","M","M","F","F","F","M","F","F","F","F","M","M","F","F","F","F","F","F","F","M","F","F","F","M","M","F","M","F","M","M","F","M","F","M","M","F","M","F","F","F","F","M","M","F","F","F","F","M","F","M","F","F","F","M","M","M","F","M","F","F","M","M","F","M","F","F","M","M","M","M","M","M","M","F","M","F","M","F","M","F","F","M","M","F","F","F","F","M","F","M","F","M","F","M","M","F","F","M","F","F","F","M","M","M","M","F","M","F","M","M","F","M","M","M","M","M","M","M","M","M","F","F","F","M","M","M","F","F","M","F","M","M","M","M","M","F","F","F","M","M","M","F","M","F","F","M","M","M","F","M","M","F","F","F","F","F","F","F","F","F","F","F","F","F","M","F","M","F","F","F","M","F","F","F","F","F","M","F","F","F","M","M","F","F","M","M","M","M","M","M","F","F","M","M","M","M","M","F","M","M","M","M","M","M","M","M","M","M","M","F","M","M","F","F","M","M","F","F","M","M","F","M","F","F","F","F","M","F","F","F","M","F","M","M","M","F","F","F","M","F","F","M","M","M","F","F","F","M","M","F","F","F","M","F","M","F","F","M","F","M","M","M","F","F","F","M","F","F","F","F","F","F","F","F","F","F","F","F","M","M","M","F","F","M","F","F","F","F","F","F","F","F","F","F","M","M","F","F","F","M","M","F","M","M","M","M","M","M","F","F","F","M","F","F","M","F","F","F","M","M","F","F","F","F","M","F","F","F","F","F","F","F","F","M","M","M","M","M","F","F","F","F","F","M","M","M","M","M"]

fem_1 = 0
fem_2 = 0
fem_3 = 0
fem_4 = 0
fem_5 = 0

mas_1 = 0
mas_2 = 0
mas_3 = 0
mas_4 = 0
mas_5 = 0

for i in range(0,395):
    if (sex[i] == "F"):
        if(study[i] == 1):
            fem_1 += 1
        elif(study[i] == 2):
            fem_2 += 2
        elif(study[i] == 3):
            fem_3 += 1
        elif(study[i] == 4):
            fem_4 += 1
        elif(study[i] == 5):
            fem_5 += 1
    elif(sex[i] == "M"):
        if(study[i] == 1):
            mas_1 += 1
        elif(study[i] == 2):
            mas_2 += 2
        elif(study[i] == 3):
            mas_3 += 1
        elif(study[i] == 4):
            mas_4 += 1
        elif(study[i] == 5):
            mas_5 += 1

labels = ['1H', '2H', '3H', '4H', '5H']
men_means = [mas_1, mas_2, mas_3, mas_4, mas_5]
women_means = [fem_1, fem_2, fem_3, fem_4, fem_5]

x = np.arange(len(labels))  # the label locations
width = 0.35  # the width of the bars

fig, ax = plt.subplots()
rects1 = ax.bar(x - width/2, men_means, width, label='Men',color="blue")
rects2 = ax.bar(x + width/2, women_means, width, label='Women', color="hotpink")

# Add some text for labels, title and custom x-axis tick labels, etc.
ax.set_ylabel('Hours')
ax.set_title('Study hours by gender')
ax.set_xticks(x)
ax.set_xticklabels(labels)
ax.legend()


fig.tight_layout()

plt.show()