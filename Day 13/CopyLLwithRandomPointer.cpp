#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    unordered_map<LinkedListNode<int>*,LinkedListNode<int>*> hm;
    for(LinkedListNode<int> *curr=head;curr!=NULL;curr=curr->next)
        hm[curr]=new LinkedListNode<int>(curr->data);
    
    for(LinkedListNode<int> *curr=head;curr!=NULL;curr=curr->next){
        LinkedListNode<int> *cloneCurr=hm[curr];
        cloneCurr->next=hm[curr->next];
        cloneCurr->random=hm[curr->random];
    }
    LinkedListNode<int> *head2=hm[head];
    
    return head2;
}
