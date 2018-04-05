// Given a linked list, return the node where the cycle begins. If there is no cycle, return null. 
// https://leetcode.com/problems/linked-list-cycle-ii/description/
// Also, Cracking the Coding Interview problem 2.8: Loop Detection

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

        while(pP != NULL && pQ != NULL && pQ->next != NULL) {
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

// Runtime: 12 ms, beats 46.62 of submissions.