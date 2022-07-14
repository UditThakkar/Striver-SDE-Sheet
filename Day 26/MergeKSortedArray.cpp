#include<bits/stdc++.h>
vector<int> mergeKSortedArrays(vector<vector<int>>&arr, int k)
{
    // Write your code here. 
    priority_queue<int,vector<int>,greater<int>> mh;
    for(int i=0;i<k;i++){
        for(int j=0;j<arr[i].size();j++){
            mh.push(arr[i][j]);
        }
    }
    vector<int> ans;
    while(mh.size()>0){
        ans.push_back(mh.top());
        mh.pop();
    }
    return ans;
}
