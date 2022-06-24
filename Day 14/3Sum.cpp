#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int k) {
	// Write your code here.
//     int n = arr.size(),k=0;
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        // unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            int curr = k-arr[i];
            int l = i+1,r=n-1;
            while(l<r && (i==0 || arr[i]!=arr[i-1])){
                if(arr[l]+arr[r]==curr){
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[l]);
                    temp.push_back(arr[r]);
                    ans.push_back(temp);
                    while(l<r and arr[l]==arr[l+1]) l++;
                    while(l<r and arr[r]==arr[r-1]) r--;
                    l++;
                    r--;
                }
                else if(arr[l]+arr[r]>curr) r--;
                else l++;
            }
        }
        return ans;
}
