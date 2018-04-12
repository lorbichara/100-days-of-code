// Project Euler
// 2. Even Fibonacci Numbers
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
// Result: 4613732
// https://projecteuler.net/problem=2

#include <iostream>
using namespace std;

long fibonacci(int iN)  {
    if(iN == 0 || iN == 1)
        return iN;
   else
      return fibonacci(iN - 1) + fibonacci(iN - 2);
}

int main() {
	long iSum = 0;
	long iFib = 0;

	for(int i = 1; i < 35; i++) {
		iFib = fibonacci(i);
		if(iFib < 4000000) {
			if(iFib % 2 == 0) {
				iSum += iFib;
			}
		}
		else
			break;
	}

	cout << iSum << endl;
}