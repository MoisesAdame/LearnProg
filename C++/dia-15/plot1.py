import matplotlib
import matplotlib.pyplot as plt
plt.xkcd()

ages = [10, 13, 15, 17, 18]

women = [60, 1424, 2856, 3171, 1665]
plt.plot(ages,women, color="hotpink", label = "women")

men = [105, 1669, 2063, 2155, 1498]
plt.plot(ages,men, color="blue",label = "men")

plt.title("Age of First Sexual Intercourse (Virginia)")
plt.xlabel("Age")
plt.ylabel("People")
plt.legend()
plt.show()