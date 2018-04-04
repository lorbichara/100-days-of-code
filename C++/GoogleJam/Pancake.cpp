// Google Code Jam
// Practice Problem: Qualification Round 2017, Problem A
// https://code.google.com/codejam/contest/3264486/dashboard
// To compile use: ./pancake < A-small-practice.in > small_output_file.txt
#include <iostream>
#include <fstream>
using namespace std;

char flip(char c) {
	if(c == '+')
		return '-';
	else if(c == '-')
		return '+';
	else
		return 0;
}

void pancakeFlips(int t, string s, int k, int caseCount) {
	bool allHappy = true;
	int flipCount = 0;
	for(int i = 0; i + k <= s.length(); i++) {
		if(s[i] == '-') {
			for(int j = i; j < i + k; j++) {
				s[j] = flip(s[j]);
			}
			flipCount++;
		}
	}

	for(int i = 0; i < s.length(); i++) {
		if(s[i] != '+') {
			allHappy = false;
			break;
		}
	}

	if(allHappy)
		cout << "Case #" << caseCount << ": " << flipCount << endl;
	else
		cout << "Case #" << caseCount << ": " << "IMPOSSIBLE" << endl;
}

int main() {
	int t, caseCount = 1;
	string s;
	int k;

  	cin >> t;
 	for (int i = 1; i <= t; ++i) {
	    cin >> s >> k;
	    pancakeFlips(t, s, k, caseCount);
	    caseCount++;
 	}	
}