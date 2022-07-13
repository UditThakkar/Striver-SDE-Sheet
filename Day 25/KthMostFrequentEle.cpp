 #include<bits/stdc++.h>
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    vector<int> ans;
    priority_queue<pair<int,int>> pq;
    for(auto it:mp){
        pq.push(make_pair(it.second,it.first));
    }
    for(int i=0;i<k;i++){
        auto it = pq.top();
        int at = it.second;
        ans.push_back(at);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}
