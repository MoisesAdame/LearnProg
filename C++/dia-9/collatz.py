import matplotlib
import matplotlib.pyplot as plt

#Collatz Function
arr = []
def collatz(x):
  while(x>1):
    if(x%2 == 0):
      x = x/2
      arr.append(x)
      collatz(x)
    else:
      x = 3*x +1
      arr.append(x)
      collatz(x)
    break
  return int(len(arr))

#Visualization Using Matplotlib
xs = [x for x in range(1,101)]
ys = [collatz(x) for x in xs]
plt.scatter(xs,ys, color="red", marker=".")
plt.plot(xs,ys, color="black")
plt.title("COLLATZ CONJECTURE")
plt.grid()
plt.show()
