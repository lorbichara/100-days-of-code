// Cracking the Coding Interview
// Question 1.9
// String Rotation: Write code to check if s2 is a rotation of s1 using only one call to isSubstring (a method that checks if one word is a substring of another).
#include <iostream>
using namespace std;

bool stringRotation(string s1, string s2) {
	string conc = s2 + s2;
	if(conc.find(s1) != string::npos)
		return true;
	else
		return false;
}

int main() {
	string s1, s2;
	cin >> s1 >> s2;

	if(stringRotation(s1, s2))
		cout << "S2 is a rotation of S1" << endl;
	else
		cout << "S2 isn't a rotation of S1" << endl;
}