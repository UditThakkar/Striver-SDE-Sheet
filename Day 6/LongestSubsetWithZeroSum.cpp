#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    int n = arr.size();
    unordered_map<int,int> mp;
    int curr = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        curr += arr[i];
        if(curr==0) ans = i+1;
        else{
            if(mp.find(curr)!=mp.end()){
                ans = max(ans,i-mp[curr]);
            }
            else mp[curr] = i;
        }
    }
    return ans;

}
