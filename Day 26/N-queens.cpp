
bool isSafe(vector<vector<int>> &board,int row,int col,int n){
    int i,j;
    for(i=0;i<col;i++){
        if(board[row][i]) return false;
    }
    for(i=row,j=col;i>=0 and j>=0;i--,j--){
        if(board[i][j]) return false;
    }
    for(i=row,j=col;j>=0 and i<n;i++,j--){
        if(board[i][j]) return false;
    }
    return true;
}

void fun1(vector<vector<int>> &board,int n,vector<vector<int>> &ans){
    vector<int> temp;
    for (auto x: board) {
        for (auto y: x) {
            temp.push_back(y);
        }
    }
    ans.push_back(temp);
}

void fun(vector<vector<int>> &board,int col,int n,vector<vector<int>> &ans){
    if(col >= n){
        fun1(board,n,ans);
        return;
    }
    for(int i=0;i<n;i++){
        if(isSafe(board,i,col,n)){
            board[i][col] = 1;
            fun(board,col+1,n,ans);
            board[i][col] = 0;
        }
    }
    return;
}

vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>> board(n,vector<int>(n,0));
    vector<vector<int>> ans;
    fun(board,0,n,ans);
    return ans;
}
