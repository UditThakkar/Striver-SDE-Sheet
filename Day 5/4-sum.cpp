#include <bits/stdc++.h> 
string fourSum(vector<int> nums, int t, int n) {
    // Write your code here.
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> s;
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                long long int nt = t - nums[i]-nums[j];
                long long int l = j+1,h = n-1;
                while(l<h){
                    long long sum = nums[l]+nums[h];
                    if(sum>nt) h--;
                    else if(sum<nt) l++;
                    else{
                        return "Yes";
                    }
                }
            }
        }
      return "No";

}
