// Project Euler
// 10. Summation of Primes
// Find the sum of all the primes below two million.
// Result: 142913828922
// https://projecteuler.net/problem=10

#include <iostream>
using namespace std;

bool isPrime(int n) {
	for(int i = 2; i <= n/2; i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
} 

int main() {
	long iSum = 0;

	for(int i = 0; i < 2000000; i++) {
		if(isPrime(i))
			iSum += i;
	}

	iSum--;

	cout << iSum << endl;
}