# Create a program that asks the user to enter their name and their age. Print out a message addressed to them that tells them the year that they will turn 100 years old.
# Extras:
#     Add on to the previous program by asking the user for another number and printing out that many copies of the previous message. (Hint: order of operations exists in Python)
#     Print out that many copies of the previous message on separate lines. (Hint: the string "\n is the same as pressing the ENTER button)

#Python 3
name = input("Please enter your name: ")
age = int(input("Please enter your age: "))

year100 = (2018- age) + 100
string = "Dear " + name + ", you will turn 100 years old in the year"

print(string, year100)

copies = int(input("How many copies of the message do you want? "))
while(copies > 0):
	print(string, year100)
	copies = copies - 1

#Python 2
# name = raw_input("Please enter your name: ")
# age = input("Please enter your age: ")

# year100 = (2018- age) + 100
# string = "Dear " + name + ", you will turn 100 years old in the year"
# print string, year100
# copies = int(input("How many copies of the message do you want? "))
# while(copies > 0):
# 	print string, year100
# 	copies = copies - 1