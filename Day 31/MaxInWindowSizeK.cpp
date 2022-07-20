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


// efficient 
#include<bits/stdc++.h>
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.
    deque<int> dq;
    vector<int> ans;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(!dq.empty() and dq.front()==i-k) dq.pop_front();
           while (!dq.empty() && nums[dq.back()] < nums[i])
          dq.pop_back();

        dq.push_back(i);
        if (i >= k - 1) ans.push_back(nums[dq.front()]);
      }
      return ans;
}
