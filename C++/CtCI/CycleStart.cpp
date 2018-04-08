// Cracking the Coding Interview
// Question 2.6
// Loop Detection: Given a linked list, return the node where the cycle begins. If there is no cycle, return null. 
// Linked List implementation: https://www.geeksforgeeks.org/remove-duplicates-from-an-unsorted-linked-list/
// Also on LeetCode: https://leetcode.com/problems/linked-list-cycle-ii/description/

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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return NULL;
        
    	ListNode *pP;
        ListNode *pQ;
        pP = head;
        pQ = head;

        while(pQ != NULL && pQ->next != NULL) {
        	pP = pP->next;
        	pQ = pQ->next->next;

        	if(pP == pQ) {
                pP = head;
                while(pP != pQ) {
                    pP = pP->next;
                    pQ = pQ->next;
                }
                return pP;
        	}
        }
        return NULL;
    }
};

// Runtime: 10 ms, beats 99.32 of submissions.