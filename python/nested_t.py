travel = input ("Yes on NO:")

while travel == "yes":

    num = int(input("Number of people travelling:"))

    for num in range (num, num+1):
        name = input("Name:")
        age = input("Age:")
        sex = input("Male or Female:")

        print(name)
        print(age)
        print(sex)

    travel = input ("Add persons ?")