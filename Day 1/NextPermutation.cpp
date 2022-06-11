#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &perm, int n)
{
  
    vector<int> v;
    next_permutation(perm.begin(),perm.end());
    for(int i=0;i<n;i++){
        v.push_back(perm[i]);
    }
    return v;
}
