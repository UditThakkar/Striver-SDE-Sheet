#include<bits/stdc++.h>
void sortStack(stack<int> &st)
{
	// Write your code here
    priority_queue<int> pq;
    while(!st.empty()){
        pq.push(st.top());
        st.pop();
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
