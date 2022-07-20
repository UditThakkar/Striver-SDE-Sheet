#include<bits/stdc++.h>
void fun(vector<int> arr,int l,int r,vector<int>&ans){
    int i,currm = INT_MIN;
    for(i=l;i<=r;i++){
        currm = max(currm,arr[i]);
    }
    ans.push_back(currm);
}

vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.
    int l=0,r=0;
    int i,j;
    vector<int> ans;
    r = k-1;
    int n = nums.size();
    while(r<n){
        fun(nums,l,r,ans);
        l++;
        r++;
    }
    return ans;
}
