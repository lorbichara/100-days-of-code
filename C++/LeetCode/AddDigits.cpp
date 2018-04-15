// 258. Add Digits
// Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
// For example: Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
// https://leetcode.com/problems/add-digits/

// Using digital root formula.
class Solution {
public:
    int addDigits(int num) {
        int sum = num - 9 * floor((num - 1) / 9);
        return sum;
    }
};
// Runtime: 8 ms, beats 52.55% of submissions.

// Using a variation of the formula.
class Solution {
public:
    int addDigits(int num) {
        int sum = 1 + (num - 1) % 9;
        return sum;
    }
};
// Runtime: 7 ms, beats 82.08% of submissions.

class Solution {
public:
    int numDigits(int n) {
        int digits = 0;
        if (n < 0) {
            digits = 1;
        }

        while (n) {
            n /= 10;
            digits++;
        }

        return digits;
    }

    stack<int> separateInt(int n) {
        stack<int> digitStack;

        while (n > 0)
        {
            int digit = n%10;
            n /= 10;
            digitStack.push(digit);
        }

        return digitStack;
    }

    int addDigits(int num) {
        stack<int> digitStack = separateInt(num);

        int iSum = 0;

        while (!digitStack.empty())
        {
            int digit = digitStack.top();
            digitStack.pop();
            iSum += digit;
        }

        while(numDigits(iSum) > 1)
        {
            stack<int> sstack = separateInt(iSum);
            iSum = 0;

            while (!sstack.empty())
            {
                int digit = sstack.top();
                sstack.pop();
                iSum += digit;
            }
        }

        return iSum;      
    }
};

// Runtime: 13 ms, beats 3.68% of submissions.