// Cracking the Coding Interview
// Question 1.4
// Palindrome Permutation: Given a string, write a function to check if it's a permutation of a palindrome.

#include <iostream>
#include <map>
using namespace std;

// In a palindrome, each character must appear an even number of times,
// with the optional exception of a character that may appear only once (the middle character).
bool palindromePermutation(string s) {
	map<char, int> letters;
	map<char, int>::iterator it;
	int count1 = 0;
	bool isPalindrome = false;

	for(int i = 0; i < s.length(); i++) {
        if(letters.insert(make_pair(s[i], 1)).second == false) {
            letters[s[i]] += 1;
        }
        else {
            letters.insert(pair<char, int>(s[i], 1));
        }
    }

    letters.erase (' '); //to erase spaces if there's any space in the string.

	for(it = letters.begin(); it != letters.end(); ++it) {
		if(it->second == 1)
			count1++;
		else if(it->second % 2 == 0 && count1 < 2)
			isPalindrome = true;
		else
			return false;
	}

	if(isPalindrome)
		return true;
	else
		return false;
}

int main() {
	string s;
	getline(cin, s);

	if(palindromePermutation(s))
		cout << "It is a permutation of a palindrome." << endl;
	else
		cout << "It isn't a permutation of a palindrome." << endl;
}