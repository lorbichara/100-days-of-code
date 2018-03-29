// Cracking the Coding Interview
// Question 1.2
// Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.
#include <iostream>
#include <map>
using namespace std;

//Using map
bool checkPermutation(string s1, string s2) {
	if(s1.length() != s2.length())
		return false;

	map<char, int> mapString1;
	map<char, int> mapString2;

	for(int i = 0; i < s1.length(); i++) {
		if(mapString1.insert(make_pair(s1[i], 1)).second == false) {
			mapString1[s1[i]] += 1;
		}
		else
			mapString1.insert(make_pair(s1[i], 1));
	}

	for(int i = 0; i < s2.length(); i++) {
		if(mapString2.insert(make_pair(s2[i], 1)).second == false) {
			mapString2[s2[i]] += 1;
		}
		else
			mapString2.insert(make_pair(s2[i], 1));
	}

	map<char, int>::iterator i, j;
	for(i = mapString1.begin(), j = mapString2.begin(); i != mapString1.end(); ++i, ++j) {
		if(*i != *j)
			return false;
	}

	return true;
}

int main() {
	string s1, s2;
	cout << "Introduce 2 strings: ";
	cin >> s1 >> s2;

	if(checkPermutation(s1, s2))
		cout << "String 2 is a permutation of String 1." << endl;
	else
		cout << "String 2 isn't a permutation of String 1." << endl;
}