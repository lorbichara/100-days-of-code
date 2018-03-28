// Cracking the Coding Interview
// Question 1.1
// Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;


//With map.
bool isUniqueMap(string s) {
	map<char, int> letters; //declaré map como un par de string, int en lugar de char, int

	for(int i = 0; i < s.length(); i++) {
		if(letters.insert(make_pair(s[i], 1)).second == false) {
			return false;
		}
		else
			letters.insert(make_pair(s[i], 1));
	}
    return true;
}

//With unordered map (Hash Map)
bool isUniqueUnorderedMap(string s) {
	unordered_map<char, int> letters; //declaré map como un par de string, int en lugar de char, int

	for(int i = 0; i < s.length(); i++) {
		if(letters.insert(make_pair(s[i], 1)).second == false) {
			return false;
		}
		else
			letters.insert(make_pair(s[i], 1));
	}
    return true;
}

// With array of boolean values.
// Time: O(n) where n is length of string.
// Space: 0(1)
bool isUniqueArray(string s) {
	bool arr[256] = {false}; //initialize to all false, extended ascii
	int val = 0;

	for(int i = 0; i < s.length(); i++) {
		val = s[i];
		if(arr[val] != true)
			arr[val] = true;
		else
			return false;
	}
	return true;
}

int main() {
	string s;
	cout << "Introduce a string: ";
	cin >> s;

	if(isUniqueUnorderedMap(s))
		cout << "The string has all unique characters." << endl;
	else
		cout << "The string doesn't have all unique characters." << endl;
}