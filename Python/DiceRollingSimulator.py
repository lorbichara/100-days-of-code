#Dice Rolling Simulator in Python

from random import *

userInput = raw_input("Would you like to roll a dice? Y/N: ") #raw_input to take literal string/char

while (userInput == 'Y'):
	n = randint(1, 6)
	print n
	userInput = raw_input("Would you like to roll a dice? Y/N: ")

print("Goodbye!")