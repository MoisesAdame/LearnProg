import matplotlib
import matplotlib.pyplot as plt


#π(n) (prime counting function)
def prime(n):
  counter = 0
  for i in range(1,n):
    if(n%i == 0):
      counter += 1
  if(counter == 1):
    return 1
  else:
    return 0

#Reverse bits function
def reverseBits(n) :
    rev = 0
    while (n > 0) :
        rev = rev << 1
        if (n & 1 == 1) :
            rev = rev ^ 1
        n = n >> 1
    return rev

#Filling the array xs of prime numbers
xs = []
ys = []
for j in range(100000):
  if(prime(j) == 1):
    xs.append(j)
    ys.append(reverseBits(j))
plt.scatter(xs,ys,color = "black", marker =".")

#Linear regresion graph
def funct(x):
  return 1.12632*x -922.184

xt = [0,100000]
yt = [funct(0),funct(100000)]

plt.plot(xt,yt, color = "red")

plt.show()