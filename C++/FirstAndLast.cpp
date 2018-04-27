// Function that takes a string and returns it compressed:
// First and last character remain the same, the middle is replaced by the amount of characters in between.
// I believe this was asked on a Google interview.

#include <iostream>
using namespace std;

string firstAndLast(string s) {
	string newString = "";
	int sLength = s.length();

	newString += s[0];
	newString += to_string(sLength - 2);
	newString += s[sLength-1];

	return newString;
}

int main() {
	string s;
	cin >> s;

	cout << firstAndLast(s) << endl;
}