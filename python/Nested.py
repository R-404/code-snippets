from math import sqrt
n = int(input("Maximum number:"))

for a in range (1, n+1) :
    for b in range (a, n) :
        c_s = a**2 + b**2
        c = int(sqrt(c_s))
        if ((c_s - c**2) == 0) :
            print (a, b ,c)
