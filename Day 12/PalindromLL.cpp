#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    stack<int> st;
    LinkedListNode<int>* curr = head;
    while(curr!=NULL){
        st.push(curr->data);
        curr = curr->next;
    }
    curr = head;
    while(st.empty()==false){
        if(st.top()!=curr->data){
            return false;
        }
        curr = curr->next;
        st.pop();
    }
    return true;
}
