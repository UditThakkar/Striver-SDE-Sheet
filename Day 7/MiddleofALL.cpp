#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    // Write your code here
    if(head==NULL) return head;
    Node* slow = head, *fast = head;
    while(fast!=NULL and fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
