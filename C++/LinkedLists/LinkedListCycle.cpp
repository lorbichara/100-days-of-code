// Given a linked list, determine if it has a cycle in it. 
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
    bool hasCycle(ListNode *head) {
        ListNode *pP;
        ListNode *pQ;
        pP = head;
        pQ = head;

        while(pP != NULL && pQ != NULL && pQ->next != NULL) {
            pP = pP->next;
            pQ = pQ->next->next;
            
            if(pP == pQ)
                return true;
        }
        
        return false;
    }
};

// Runtime: 12 ms, beats 38.69% of submissions.