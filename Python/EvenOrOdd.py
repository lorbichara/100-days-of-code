# Ask the user for a number. Depending on whether the number is even or odd, print out an appropriate message to the user.
# Extras:
#     If the number is a multiple of 4, print out a different message.
#     Ask the user for two numbers: one number to check (call it num) and one number to divide by (check). If check divides evenly into num, tell that to the user. If not, print a different appropriate message.

#Python 2
num = input("Please enter a number: ") #For Python 3 just cast input: int(input(""))
if num % 4 == 0:
	print("Number is a multiple of 4 and even.")
elif num % 2 == 0:
	print("Number is even.")
else:
	print("Number is odd.")

check = input("Please enter another number to divide by: ") #For Python 3 just cast input: int(input(""))
if num % check == 0:
	print("The number you entered divides evenly by the first one.")
else:
	print("The number you entered doesn't divide evenly by the first one.")

