//Collatz Conjecture
#include <iostream>
using namespace std;

long long collatz(long long n) {
	if(n == 1)
		return 1;

	if(n % 2 == 0) {
		cout << n/2 << " ";
		return collatz(n/2);
	}
	else {
		cout << (3*n) + 1 << " ";
		return collatz((3*n) + 1);
	}
}

int main() {
	long long n;
	cin >> n;

	int cont = 0;

	if(n == 1) {
		cout << 1;
		cont++;
		return 1;
	}

	while(n != 1) {
		if(n % 2 == 0) {
			n /= 2;
			cout << n << " ";
			cont++;
		}
		else {
			n = (3*n) + 1;
			cout << n << " ";
			cont++;
		}
	}
	cout << endl;

	cout << "CONTADOR: " << cont << endl;
}