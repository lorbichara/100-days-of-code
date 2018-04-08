// Cracking the Coding Interview
// Question 2.6
// Palindrome: Implement a function to check if a linked list is a palindrome.
// Also on LeetCode: https://leetcode.com/problems/palindrome-linked-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> myStack;
        ListNode* pP = head;
        
        while(pP != NULL) {
            myStack.push(pP->val);
            pP = pP->next;
        }
        
        pP = head;
        
        while (!myStack.empty())
        {
            while(pP != NULL) {
                if(pP->val != myStack.top())
                    return false;
                else {
                    myStack.pop();
                    pP = pP->next;
                }
            }
        }
        return true;
    }

    //This solution is the same, except it only adds half of the list to the stack.
    bool isPalindrome(ListNode* head) {
        stack<int> myStack;
        ListNode* pSlow = head;
        ListNode* pFast = head;
        
        while(pFast != NULL && pFast->next != NULL) {
            myStack.push(pSlow->val);
            pSlow = pSlow->next;
            pFast = pFast->next->next;
        }
        
        if(pFast != NULL)
            pSlow = pSlow->next;
        
            while(pSlow != NULL) {
                if(pSlow->val != myStack.top())
                    return false;
                else {
                    myStack.pop();
                    pSlow = pSlow->next;
                }
            }
        return true;
    }
};

// Runtime: 22 ms, beats 58.23% of submissions.
