// Project Euler
// 7. 10001st prime
// What is the 10 001st prime number?
//Answer: 104743
// https://projecteuler.net/problem=7

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
	long iCount = 0;
	long prime = 0;

	for(int i = 2; i < 1000000; i++) {
		if(iCount < 10001) {
			if(isPrime(i)) {
				iCount++;
				prime = i;
			}
		}
	}
	cout << prime << endl;
}