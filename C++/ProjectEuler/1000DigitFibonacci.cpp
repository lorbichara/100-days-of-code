// Project Euler
// 25. 1000-digit Fibonacci number
// What is the index of the first term in the Fibonacci sequence to contain 1000 digits?
// Result: 
// https://projecteuler.net/problem=25

#include <iostream>
#include <math.h>
using namespace std;

int numDigits(int n)
{
    int digits = 0;
    if (n < 0)
    	digits = 1; // remove this line if '-' counts as a digit
    while (n) {
        n /= 10;
        digits++;
    }
    return digits;
}

unsigned long long int fibonacci(int iN) {
    if(iN == 0 || iN == 1)
        return iN;
   else
      return fibonacci(iN - 1) + fibonacci(iN - 2);
}

unsigned long long int fibFormula(int iN) {
	long lFib = (pow((1 + sqrt(5)), iN) - pow((1 - sqrt(5)), iN)) / ((pow(2, iN)) * sqrt(5));
	return lFib;

}

int main() {
	// unsigned long long int iFib = 0;
	// for(int i = 12; i < 100; i++) {
	// 	iFib = fibFormula(i);
	// 	if(numDigits(iFib) == 1000) {
	// 		cout << i << endl;
	// 		return 1;
	// 	}
	// }
	// cout << fibonacci(3) << endl;
	cout << fibFormula(4782) << endl;
}