// Project Euler
// 6. Sum Square Difference
// The sum of the squares of the first ten natural numbers is: 12 + 22 + ... + 102 = 385
// The square of the sum of the first ten natural numbers is: (1 + 2 + ... + 10)2 = 552 = 3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
// https://projecteuler.net/problem=6

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long sumSquares = 0;
	long squareSum = 0;
	long result = 0;

	for(int i = 1; i <= 100; i++) {
		sumSquares += pow(i, 2);
	}

	for(int i = 1; i <= 100; i++) {
		squareSum += i;
	}

	squareSum = pow(squareSum, 2);
	result = squareSum - sumSquares;

	cout << result << endl;
}