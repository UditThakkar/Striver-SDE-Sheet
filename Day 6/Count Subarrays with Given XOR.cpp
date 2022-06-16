#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    long long count = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        int t = 0;
        for(int j=i;j<n;j++){
            t = t^arr[j];
            if(t == x){
                count++;
            }
        }
    }
    return count;
}

// Efficient approach using map
#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int,int> mp;
    int cnt = 0,xorr=0,n=arr.size();
    for(int i=0;i<n;i++){
        xorr ^= arr[i];
        if(mp.find(xorr^x)!=mp.end()){
            cnt+=mp[xorr^x];
        }
        if(xorr==x) cnt++;
        if(mp.find(xorr)!=mp.end()) mp[xorr]++;
        else mp[xorr] = 1;
    }
    return cnt;
}
