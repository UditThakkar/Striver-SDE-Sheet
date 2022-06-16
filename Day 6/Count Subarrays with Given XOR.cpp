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
