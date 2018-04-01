#include <iostream>
using namespace std;

string stringCompression(string s) {
	int iCount = 0;
	char prevChar;
	prevChar = s[0];
	string newString;
	bool isSame = false;

	for(int i = 0; i < s.length(); i++) {
		if(s[i] == prevChar) {
			iCount++;
		}
		else {
			newString = newString + s[i] + iCount;
		}

		prevChar = s[i];
	}

	return newString;
}


int main() {
	string s;
	cin >> s;

	cout << stringCompression(s) << endl;
}