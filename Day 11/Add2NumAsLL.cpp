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

Node *addTwoNumbers(Node *l1, Node *l2)
{
    // Write your code here.
    Node* dummy = new Node(NULL);
    Node* temp = dummy;
    int carry = 0;
    while(l1!=NULL or l2!=NULL or carry){
        int sum = 0;
        if(l1!=NULL){
            sum+=l1->data;
            l1 = l1->next;
        }
        if(l2!=NULL){
            sum+=l2->data;
            l2 = l2->next;
        }
        sum+=carry;
        carry = sum/10;
        Node* node = new Node(sum%10);
        temp->next = node;
        temp = temp->next;
    }
    return dummy->next;
}
