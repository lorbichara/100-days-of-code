// Cracking the Coding Interview
// Question 1.3
// URLify: Method to replace all spaces in a string with "%20".
#include <iostream>
using namespace std;

string URLify(string s, int length) {
	string newString;

	for(int i = 0; i < length; i++) {
		if(s[i] == ' ') {
			newString = newString + "%20";
		}
		else
			newString = newString + s[i];
	}

	return newString;
}

string URLifyInPlace(string s, int length) {
	int spaceCount = 0;
	int newLen = 0;

	for(int i = 0; i < length; i++) {
		if(s[i] == ' ')
			spaceCount++;
	}

	newLen = length + spaceCount * 2;

	for(int i = length - 1; i >= 0; i--) {
		if(s[i] == ' ') {
			s[newLen - 1] = '0';
			s[newLen - 2] = '2';
			s[newLen - 3] = '%';
			newLen -= 3;
		}
		else {
			s[newLen - 1] = s[i];
			newLen--;
		}
	}
	return s;
}

int main() {
	string s;
	int length;

	getline(cin, s); //use getline for spaces instead of cin
	cin >> length;

	cout << URLify(s, length) << endl;
}