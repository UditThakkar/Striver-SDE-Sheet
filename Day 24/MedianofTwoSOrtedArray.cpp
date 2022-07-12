#include<bits/stdc++.h>
double median(vector<int> a, vector<int> b)
{
    // Write your code here.
    int n = a.size(), m = b.size();
    vector<int> temp;
    for(int i = 0; i < n; i++)
    {
        temp.push_back(a[i]);
    }
    for(int i = 0; i < m; i++)
    {
        temp.push_back(b[i]);
    }
    sort(temp.begin(), temp.end());
    int len = temp.size();
    if(len%2){
        return temp[len/2];
    }
    double ans = temp[len/2-1]+temp[len/2];
    return ans/2;
}
