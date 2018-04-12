// Project Euler
// 3. Largest Prime Factor
// What is the largest prime factor of the number 600851475143 ?
// Result: 6857
// https://projecteuler.net/problem=3

#include <iostream>
#include <math.h>
using namespace std;

void primeFactors(long n) {
	while(n % 2 == 0) {
		cout << n << endl;
		n /= 2;
	}

	for(int i = 3; i <= sqrt(n); i+=2) {
		if(n % i == 0) {
			cout << i << endl;
			n /= i;
		}
	}
	if(n > 2)
		cout << n << endl;
}

int main() {
	long n = 600851475143;
	primeFactors(n);
}