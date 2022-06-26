void f(int ind,vector<int> &arr,int n,vector<int> &ans,int sum){
    if(ind==n){
        ans.push_back(sum);
        return;
    }
    f(ind+1,arr,n,ans,sum+arr[ind]);
    f(ind+1,arr,n,ans,sum);
}

vector<int> subsetSum(vector<int> &arr)
{
    // Write your code here.
    vector<int> ans;
    f(0,arr,arr.size(),ans,0);
    sort(ans.begin(),ans.end());
    return ans;
}
