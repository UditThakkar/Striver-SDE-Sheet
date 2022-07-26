#include<bits/stdc++.h>
// int fun(int ind1,int ind2,string &s, string &t){
//     if(ind1<0 or ind2 < 0) return 0;
//     if(s[ind1]==t[ind2]) return 1 + fun(ind1-1,ind2-1,s,t);
//     return 0 + max(fun(ind1-1,ind2,s,t),fun(ind1,ind2-1,s,t));
// }

int lcs(string s, string t)
{
	//Write your code here
    int n = s.size();
    int m = t.size();
    
//     return fun(n-1,m-1,s,t);
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    for(int i=0;i<=n;i++){
        dp[i][0] = 0;
    }
    for(int i=0;i<=m;i++){
        dp[0][i] = 0;
    }
    
    for(int ind1 = 1;ind1<=n;ind1++){
        for(int ind2=1;ind2<=m;ind2++){
            if(s[ind1-1]==t[ind2-1]){
                dp[ind1][ind2] = 1+dp[ind1-1][ind2-1];
            }
            else{
                dp[ind1][ind2] = 0 + max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
            }
        }
    }
    return dp[n][m];
}
