#include<bits/stdc++.h>
class Stack {
	// Define the data members.
    queue<int> *q1,*q2;

   public:
    Stack() {
        // Implement the Constructor.
        q1 = new queue<int>();
        q2 = new queue<int>();
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q1->size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return q1->size()==0;
    }

    void push(int data) {
        // Implement the push() function.
        q2->push(data);
        while(!q1->empty()){
            q2->push(q1->front());
            q1->pop();
        }
        queue<int> *temp = q1;
        q1 = q2;
        q2 = temp;
    }

    int pop() {
        // Implement the pop() function.
        if(isEmpty()){
            return -1;
        }
        int ans = q1->front();
        q1->pop();
        return ans;
    }

    int top() {
        // Implement the top() function.
        if(isEmpty()){
            return -1;
        }
        int ans = q1->front();
        return ans;
    }
};
