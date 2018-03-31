// Cracking the Coding Interview
// Question 1.5
// One Away: Given two strings, write a function to check if they are one edit (or zero edits) away.
// (Insert, remove or replace a character)
#include <iostream>
using namespace std;

//"Brute force" approach.
bool oneAway(string s1, string s2) {
	string newString, originalS1, originalS2, new1, new2;
	originalS1 = s1;
	originalS2 = s2;

	//Check for deleted character
	if(s1.length() == s2.length() + 1) {
		for(int i = 0; i < s1.length(); i++) {
			newString = s1.erase(i, 1);
			if(newString == s2) {
				//cout << "Deleted" << endl;
				return true;
			}
			else
				s1 = originalS1;
		}
	}

	//Check for modified character
	s1 = originalS1;
	s2 = originalS2;
	if(s1.length() == s2.length()) {
		for(int i = 0; i < s1.length(); i++) {
			new1 = s1.erase(i, 1);
			new2 = s2.erase(i, 1);
			if(new1 == new2) {
				//cout << "Modified" << endl;
				return true;
			}
			else {
				s1 = originalS1;
				s2 = originalS2;
			}
		}
	}

	//Check for added character
	s1 = originalS1;
	s2 = originalS2;
	if(s1.length() == s2.length() - 1) {
		for(int i = 0; i < s2.length(); i++) {
			new2 = s2.erase(i, 1);
			if(s1 == new2) {
				//cout << "Added" << endl;
				return true;
			}
			else
				s2 = originalS2;
		}
	}

	return false;
}

bool replace(string s1, string s2) {
	int count = 0;

	for(int i = 0; i < s1.length(); i++) {
		if(s1[i] != s2[i])
			count++;

		if(count > 1)
			return false;
	}
	return true;
}

bool addDel(string s1, string s2) {
	int index1 = 0;
	int index2 = 0;

	while(index1 < s1.length() && index2 < s2.length()) {
		if(s1[index1] != s2[index2]) {
			if(index1 != index2)
				return false;
			index2++;
		}
		else {
			index1++;
			index2++;
		}
	}
	return true;
}

bool oneAwayAux(string s1, string s2) {
	if(s1.length() == s2.length() + 1)
		return addDel(s1, s2);
	else if(s1.length() == s2.length())
		return replace(s1, s2);
	else if(s1.length() == s2.length() - 1)
		return addDel(s1, s2);
	else
		return false;
}

int main() {
	string s1, s2;
	cin >> s1 >> s2;

	if(oneAway(s1, s2))
		cout << "true" << endl;
	else
		cout << "false" << endl;
}