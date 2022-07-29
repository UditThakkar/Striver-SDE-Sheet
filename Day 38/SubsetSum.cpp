bool fun(vector<int>arr,int ind, int sum,vector<vector<int>> &dp){
        if(sum==0) return true;
        if(ind==0) return arr[ind]==sum;
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        bool nottake = fun(arr,ind-1,sum,dp);
        bool take = false;
        if(sum>=arr[ind]){
            take = fun(arr,ind-1,sum-arr[ind],dp);
        }
        return dp[ind][sum] = (take or nottake);
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>> dp(n,vector<int>(k+1,-1));
    return fun(arr,n-1,k,dp);
}
