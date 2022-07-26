#include <bits/stdc++.h>
int f(int ind,int prev,int arr[],int n,vector<vector<int>> &dp){
    if(ind==n) return 0;
    if(dp[ind][prev+1]!=-1) return dp[ind][prev];
    int len = 0;
    len = 0 + f(ind+1,prev,arr,n,dp);
    if(prev==-1 or arr[ind]>arr[prev]){
        len = max(len,1+f(ind+1,ind,arr,n,dp));
    }
    return dp[ind][prev+1] = len;
}

int longestIncreasingSubsequence(int arr[], int n)
{
//     // Write Your Code here
//         vector<int> dp(n,1),hash(n);
//         int last = 0;
//         int ans = 0;
//         for(int i=0;i<n;i++){
//             hash[i] = i;
//             for(int prev = 0;prev < i;prev++){
//                 if(arr[prev]<arr[i] and 1+dp[prev]>dp[i]){
//                     dp[i] = dp[prev]+1;
//                     hash[i] = prev;
//                 }
//             }
// //             ans = max(ans,dp[i]);
//             if(dp[i]>ans){
//                 ans = dp[i];
//                 last = i;
//             }
//         }
//         vector<int> lis;
//             lis.push_back(arr[last]);
//             while(hash[last]!=last){
//                 last = hash[last];
//                 lis.push_back(arr[last]);
//             }
//     reverse(lis.begin(),lis.end());
//     for(int i=0;i<ans;i++) cout<<lis[i]<<" ";
//     cout<<endl;
//     return ans;
    vector<int> temp;
    temp.push_back(arr[0]);
    int len = 1;
    for(int i=1;i<n;i++){
        if(arr[i]>temp.back()){
            temp.push_back(arr[i]);
            len++;
        }
        else{
            auto ind = lower_bound(temp.begin(),temp.end(),arr[i]);
            *ind = arr[i];
        }
    }
    return len;
}
