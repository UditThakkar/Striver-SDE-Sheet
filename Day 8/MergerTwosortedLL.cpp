#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* a, Node<int>* b)
{
    // Write your code here.
    if(a==NULL) return b;
        if(b==NULL) return a;
        Node<int>* head = NULL;
        Node <int>*tail = NULL;
        if(a->data <= b->data){
            head = a;
            tail = a;
            a = a->next;
        }
        else{
            head = tail = b;
            b = b->next;
        }
        while(a!=NULL and b!=NULL){
            if(a->data<=b->data){
                tail->next = a;
                tail = a;
                a = a->next;
            }
            else{
                tail->next = b;
                tail = b;
                b = b->next;
            }
        }
        if(a==NULL) tail->next = b;
        else tail->next = a;
        return head;
}
