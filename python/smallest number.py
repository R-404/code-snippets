number1 = (int(input("Enter the value number 1=")))
number2 = (int(input("Enter the value number 2=")))
number3 = (int(input("Enter the value number 3=")))
number4 = (int(input("Enter the value number 4=")))

smallest_number = number1

if number2<smallest_number:
    smallest_number = number2

if number3<smallest_number:
    smallest_number = number3

if number4<smallest_number:
    smallest_number = number4

    
print("The Smallest number is" , smallest_number)
