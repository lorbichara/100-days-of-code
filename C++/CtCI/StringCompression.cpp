// Cracking the Coding Interview
// Question 1.6
// String Compression: Implement a method to perform basic string compression using the counts of repeated characters.
#include <iostream>
#include <string>
using namespace std;

string stringCompression(string s) {
	int iCount = 0;
	char prevChar;
	prevChar = s[0];
	string newString;
	bool isSame = false;

	for(int i = 0; i < s.length(); i++) {
		iCount++;

		if(i + 1 >= s.length() || s[i] != s[i+1]) {
			newString += s[i];
			newString += to_string(iCount);
			iCount = 0;
		}
	}

	if(newString.length() > s.length())
		return s;
	else
		return newString;
}


int main() {
	string s;
	cin >> s;

	cout << stringCompression(s) << endl;
}