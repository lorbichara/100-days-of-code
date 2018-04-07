// Cracking the Coding Interview
// Question 2.2
// Return Kth to Last: Impleent an algorithm to find the kth to last element of a singly linked list.
// Linked List implementation: https://www.geeksforgeeks.org/remove-duplicates-from-an-unsorted-linked-list/
#include <iostream>
using namespace std;
 
// A linked list node
struct Node
{
    int data;
    struct Node *next;
};
 
// Utility function to create a new Node
struct Node *newNode(int data)
{
   Node *temp = new Node;
   temp->data = data;
   temp->next = NULL;
   return temp;
}

struct Node kthToLastNode(struct Node *head, int k) {
	if(head == NULL)
		return *head;

    struct Node *pP = head;
    int iSize = 1;
    int position = 0;

    while(pP->next != NULL) {
        pP = pP->next;
        iSize++;
    }

    position = iSize - k;

    pP = head;
    for(int i = 0; i < position; i++) {
        pP = pP->next;
    }

   // cout << pP->data << endl;
    return *pP;
}


// O(n)
struct Node kthToLastNodeIterative(struct Node *head, int k) {
	struct Node *pP = head;
	struct Node *pQ = head;

	for(int i = 0; i < k; i++) {
		if(pP == NULL)
			return *head;
		else
			pP = pP->next;
	}

	while(pP != NULL) {
		pP = pP->next;
		pQ = pQ->next;
	}

	return *pQ;
}

int main()
{
    // The constructed linked list is: 10->12->3->7->21->8->4
    struct Node *start = newNode(10);
    start->next = newNode(12);
    start->next->next = newNode(3);
    start->next->next->next = newNode(7);
    start->next->next->next->next = newNode(21);
    start->next->next->next->next->next = newNode(8);
    start->next->next->next->next->next->next = newNode(4);
 
    int k;
    cout << "Introduce a value for k: ";
    cin >> k;
    kthToLastNodeIterative(start, k);
}