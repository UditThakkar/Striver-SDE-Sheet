#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int hash[n+1] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int miss = 0,rep = 0;
    for(int i=1;i<=n;i++){
        if(hash[i]==0) miss = i;
        else if(hash[i]>1) rep = i;
    }
    return {miss,rep};
}
