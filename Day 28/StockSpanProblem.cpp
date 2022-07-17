#include<bits/stdc++.h>
vector<int> findSpans(vector<int> &arr) {
    // Write your code here.
    stack<int> s;
    int n = arr.size();
    s.push(0);
    vector<int> ans(n);
    ans[0]= 1;
    for(int i=1;i<n;i++){
        while(!s.empty() and arr[s.top()]<=arr[i]){
            s.pop();
        }
        int span=s.empty() ? i+1 : i-s.top();
        ans[i] = span;
        s.push(i);
    }
    return ans;
}
