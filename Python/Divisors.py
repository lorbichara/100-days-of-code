# Create a program that asks the user for a number and then prints out a list of all the divisors of that number.

n = input("Enter a number: ")
x = range(1, n+1) # Creates a list with values from 1 to n (+1 to include n on the list).

for i in x:
	if n % i == 0:
		print i,