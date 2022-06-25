#include<bits/stdc++.h>
bool comp(pair<int,int> a,pair<int,int>b){
    double r1 = (double)a.second/a.first;
    double r2 = (double)b.second/b.first;
    return r1>r2;
}

double maximumValue (vector<pair<int, int>>& arr, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(arr.begin(),arr.end(),comp);
    double res = 0.0;
    for(int i=0;i<n;i++){
        if(arr[i].first<=w){
            res+=arr[i].second;
            w = w-arr[i].first;
        }
        else{
            res+=arr[i].second*((double)w/arr[i].first);
            break;
        }
    }
    return res;
}
