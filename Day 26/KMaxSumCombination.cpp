#include<bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
    priority_queue<int> pq;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int temp = a[i]+b[j];
            pq.push(temp);
        }
    }    
    
    int count = 0;
    vector<int> ans;
    while (count < k){
        int temp = pq.top();
        ans.push_back(temp);
        pq.pop();
        count++;
    }
    return ans;
}
