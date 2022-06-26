#include<bits/stdc++.h>
int maximumActivities(vector<int> &s, vector<int> &f) {
    // Write your code here.
    vector<pair<int,int>> v;
    for(int i=0;i<s.size();i++){
        v.push_back(make_pair(f[i],s[i]));
    }
    sort(v.begin(),v.end());
    int count = 1;
    int end = v[0].first;
    for(int i=1;i<s.size();i++){
        if(end<=v[i].second){
            count++;
            end = v[i].first;
        }
    }
    return count;
}
