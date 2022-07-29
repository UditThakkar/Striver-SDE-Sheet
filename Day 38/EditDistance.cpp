
int f(int i,int j,string &s1,string &s2,vector<vector<int>> &dp){
    if(i<0) return j+1;
    if(j < 0) return i + 1;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]) return dp[i][j] = 0+f(i-1,j-1,s1,s2,dp);
    else{
        return dp[i][j] = min(1+f(i,j-1,s1,s2,dp),min(1+f(i-1,j,s1,s2,dp),1+f(i-1,j-1,s1,s2,dp)));
    }
}

int editDistance(string str1, string str2)
{
    //write you code here
    int n = str1.length();
    int m = str2.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=0;i<=n;i++) dp[i][0] = i;
    for(int j=0;j<=m;j++) dp[0][j] = j;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1 + min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
            }
        }
    }
    return dp[n][m];
//     return f(n-1,m-1,str1,str2,dp);
}
