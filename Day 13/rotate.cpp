#include <bits/stdc++.h> 
/********************************

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

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
    if(head==NULL or head->next==NULL) return head;
    for(int i=0;i<k;i++){
        Node* temp = head;
        while(temp->next->next!=NULL) temp = temp->next;
        Node* last = temp->next;
        temp->next = NULL;
        last->next = head;
        head = last;
    }
    return head;
}
