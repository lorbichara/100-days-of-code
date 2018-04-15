// Write a function that takes a string as input and returns the string reversed.
class Solution {
public:
    string reverseString(string s) {
        char temp;
        
        for(int i = 0; i < s.length() / 2; i++) {
            temp = s[i];
            s[i] = s[s.length()-i-1];
            s[s.length()-i-1] = temp;
        }
        
        return s;
    }
};

// Runtime: 11 ms, beats 44.56% of submissions.