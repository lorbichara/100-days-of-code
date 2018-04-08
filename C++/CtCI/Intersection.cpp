// Cracking the Coding Interview
// Question 2.7
// Intersection: Given two singly linked lists, determine if the two lists intersect. Return the intersecting node.
// The intersection is defined based on reference, not value.
// Also on LeetCode: https://leetcode.com/problems/intersection-of-two-linked-lists/description/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
            return NULL;
        
        int sizeA = 0;
        int sizeB = 0;

        //Have a temporary pointer to stay on each head.
        ListNode *headAtemp = headA;
        ListNode *headBtemp = headB;
        
        //Get size of list A
        while(headA != NULL) {
            sizeA++;
            headA = headA->next;
        }
        
        //Get size of list B
        while(headB != NULL) {
            sizeB++;
            headB = headB->next;
        }

        if(headA != headB) //if they don't have the same last node, they don't intersect.
            return NULL;
        
        headA = headAtemp;
        headB = headBtemp;
        
        //If they're the same size, iterate through them simoultaneously.
        if(sizeA == sizeB) {
            while(headA != NULL && headB != NULL) {
                if(headA == headB) {
                    return headA;
                }
                    
                else {
                    headA = headA->next;
                    headB = headB->next;
                }    
            }
            return NULL;
        }
        else if(sizeA > sizeB) {
            int diff = sizeA - sizeB;
            while(diff > 0 && headA != NULL) {
                headA = headA->next;
                diff--;  
            } 
            
            while(headA != NULL && headB != NULL) {
                if(headA == headB)
                    return headA;
                else {
                    headA = headA->next;
                    headB = headB->next;
                }    
            }
            return NULL;
        }
        else if(sizeA < sizeB) {
            cout << "lista 2 es más larga" << endl;
            int diff = sizeB - sizeA;
            while(diff > 0 && headB != NULL) {
                headB = headB->next;
                diff--;  
            }    
            
            while(headA != NULL && headB != NULL) {
                if(headA == headB)
                    return headA;
                else {
                    headA = headA->next;
                    headB = headB->next;
                }    
            }
            return NULL;
        }
    }
};

// Runtime: 36 ms, beats 87.05% of submissions.