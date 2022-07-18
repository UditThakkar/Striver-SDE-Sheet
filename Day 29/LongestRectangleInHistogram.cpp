#include<bits/stdc++.h>
int largestRectangle(vector < int > & arr) {
   // Write your code here.
     stack<int> s;
    int res = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        while(!s.empty() and arr[s.top()]>=arr[i]){
            int tp = s.top();
            s.pop();
            int curr = arr[tp]*(s.empty()?i:(i-s.top()-1));
            res = max(res,curr);
        }
        s.push(i);
    }
    while(!s.empty()){
        int tp = s.top();
        s.pop();
        int curr = arr[tp]*(s.empty()?n:(n-s.top()-1));
        res = max(res,curr);
    }
    return res;
 }
