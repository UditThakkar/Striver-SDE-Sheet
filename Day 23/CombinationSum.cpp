class Solution {
public:
    
    void fun(int ind,int k,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
        if (ind == arr.size()) {
            if (k == 0) {
                ans.push_back(ds);
            }
            return;
        }
        if (arr[ind] <= k) {
            ds.push_back(arr[ind]);
            fun(ind, k - arr[ind], arr, ans, ds);
            ds.pop_back();
        }

        fun(ind + 1, k, arr, ans, ds);
    }
    
    vector<vector<int>> combinationSum(vector<int>& arr, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        fun(0,k,arr,ans,ds);
        return ans;
    }
};
