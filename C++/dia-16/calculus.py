from sympy import *
print("~~~CALCULLUS~~~")
print("    Select")
x = symbols("x")
selection = ("1.Limit\t 2.Derivative\t 3.Integral\t 4.Sum\ 5.Quit")
expr = input("f(x) = ")
while selection != 5:
    if selection == 1:
        val = input("Tends to: ")
        print(limit(expr, val))
