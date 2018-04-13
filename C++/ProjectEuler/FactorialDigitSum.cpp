#include <iostream>
#include <math.h>
using namespace std;

long long int factorial(int iN) {
	if(iN == 1)
		return 1;
	else
		return iN * factorial(iN - 1);
}

int main() {
	long sum = 0;
	long long int lFactorial = factorial(100);


	cout << lFactorial << endl;
}