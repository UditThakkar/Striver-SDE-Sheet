#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    priority_queue<int,vector<int>,greater<int>> pq;
    priority_queue<int> mh;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        mh.push(arr[i]);
    }
    vector<int> ans;
    int mx,mn;
    for(int i=0;i<k;i++){
        mx = mh.top();
        mh.pop();
    }
    for(int i=0;i<k;i++){
        mn = pq.top();
        pq.pop();
    }
    return {mn,mx};
}
