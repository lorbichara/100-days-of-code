// Remove duplicates from sorted list.
// Given a sorted linked list, delete all duplicates such that each element appear only once. 
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* pP = head;
        ListNode* pQ;
        
        if(head == NULL)
            return NULL;
        
        while(pP->next != NULL) {
            if(pP->val == pP->next->val) {
                pQ = pP->next->next;
                pP->next = pQ;
            }
            else
                pP = pP->next;
        }
        return head;
    }
};

// Runtime 13ms, beats 63.75% of submissions.