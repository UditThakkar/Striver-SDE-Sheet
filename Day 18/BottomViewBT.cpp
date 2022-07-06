/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    vector<int> ans;
    map<int,int> mp;
    queue<pair<BinaryTreeNode<int>*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto p = q.front();
        BinaryTreeNode<int>* curr = p.first;
        int ind = p.second;
        mp[ind] = curr->data;
        q.pop();
        if(curr->left!=NULL) q.push({curr->left,ind-1});
        if(curr->right!=NULL) q.push({curr->right,ind+1});
    }
    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
}
