# Guess The Number
# Lorraine Bichara Assad
# march 16, 2018

from random import *

numberToGuess = randint(0, 20)
userInput = input("Guess a number between 0 and 20: ")


while (userInput != numberToGuess):
	if userInput > numberToGuess:
		print("The number is too high.")
		userInput = input("Guess a number between 0 and 20: ")
	else:
		print("The number is too low.")
		userInput = input("Guess a number between 0 and 20: ")

print("Congratulations! You guessed the number.")