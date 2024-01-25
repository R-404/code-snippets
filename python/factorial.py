num = int(input("Enter number:"))
factor = 1

if num < 0 :
    print ("Enter valid number")
elif num == 0 :
    print ("Factorial is 1")
else :
    for i in range (1, num +1 ):
        factor = factor * i
print (factor)