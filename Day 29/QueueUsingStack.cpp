#include <bits/stdc++.h>
class Queue {
    // Define the data members(if any) here.
    stack<int> *s1,*s2;
    public:
    Queue() {
        // Initialize your data structure here.
        s1 = new stack<int>();
        s2 = new stack<int>();
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        while(!s1->empty()){
            s2->push(s1->top());
            s1->pop();
        }
        s1->push(val);
        while(!s2->empty()){
            s1->push(s2->top());
            s1->pop();
        }
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(s1->empty()){
            return -1;
        }
        int val = s1->top();
        s1->pop();
        return val;
    }

    int peek() {
        // Implement the peek() function here.
        if(s1->empty()) return -1;
        return s1->top();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        if(s1->size()==0) return true;
        return false;
    }
};
