import random

n =20
guessed =  int (n * random.random()) + 1
guess = 0

while guess != guessed :
    guess = int(input("Enter number:"))
    if guess > 0 :
        if guess > guessed:
            print ("Number too LARGE")
        elif guess < guessed:
            print ("Number small")

else :
    print("Congratulations for guessing a number")
