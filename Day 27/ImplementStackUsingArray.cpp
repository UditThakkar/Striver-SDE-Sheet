struct MyStack{
    vector<int> v;
    
    void push(int x){
        v.push_back(x);
    }
    
    int pop(){
        int res=v.back();
        v.pop_back();
        return res;
    }
    
    int peek(){
        return v.back();
    }
    
    int size(){
        return v.size();
    }
    
    bool isEmpty(){
        return v.empty();
    }
};

vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &q){
	//	Write your coode here.
    int n = arr.size();
    int m = q.size();

    vector<int> ans(m, -1);

    //  Finding answer of each query.
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[j] <= q[i][1]) {
                ans[i] = max(ans[i], arr[j] ^ q[i][0]);
            }
        }
    }
    return ans;
}
