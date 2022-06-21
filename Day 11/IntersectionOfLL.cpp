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

int findIntersection(Node *f, Node *s)
{
    //Write your code here
    unordered_set<Node*> st;
    Node* curr = f;
    while(curr!=NULL){
        st.insert(curr);
        curr = curr->next;
    }
    curr = s;
    while(curr!=NULL){
        if(st.find(curr)!=st.end()){
            return curr->data;
        }
        curr = curr->next;
    }
    return -1;
}
