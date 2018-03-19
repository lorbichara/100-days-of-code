# Take two lists and write a program that returns a list that contains only the elements that are common between the lists (without duplicates). 
# Make sure your program works on two lists of different sizes.
# Extras:
# 	Randomly generate two lists to test this

import random

a = random.sample(range(30), 10) # Generate random lists of size 10 and 20.
b = random.sample(range(30), 20)

# a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
# b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
newList = []

for i in a:
	if i in b:
		if i not in newList: #Check for duplicates
			newList.append(i)

for i in newList:
	print i, #, is used to print on the same line