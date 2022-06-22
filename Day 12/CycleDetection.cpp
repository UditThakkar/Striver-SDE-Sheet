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

Node *firstNode(Node *head)
{
	//    Write your code here.
    if(head == NULL||head->next == NULL) return NULL;
    Node* slow = head,*fast = head,*temp = head;
    while(fast!=NULL and fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            while(slow != temp) {
                slow = slow->next;
                temp = temp->next;
            }
            return slow;
        }
    }
    return NULL;
//     if(slow!=fast) return head;
//     slow = head;
//     while(slow->next!=fast->next){
//         slow = slow->next;
//         fast = fast->next;
//     }
//     return fast->next;
}
