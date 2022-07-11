
void permute(string &s, vector<string> &ans,int st,int n){
    if(st==n){
        ans.push_back(s);
        
    }
    for(int i=st;i<=n;i++){
        swap(s[i],s[st]);
        permute(s,ans,st+1,n);
        swap(s[i],s[st]);
    }
}

vector<string> findPermutations(string &s) {
    // Write your code here.
    int n = s.size()-1;
    vector<string> ans;
    permute(s,ans,0,n);
    return ans;
}
