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

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
    if (head == NULL || K == 0) return head;

    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head;

    for (int i = 0; i < K; i++)
    {
        if (fast->next == NULL) {
            LinkedListNode<int> *next = head->next;
            head->next = NULL;
            head = next;

            return head;
        }
        else{
            fast = fast->next;
        }
    }
    while (fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;

    return head;
}
