#include<bits/stdc++.h>
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.
    vector<int> ans;
    map<int,vector<int>> mp;
    queue<pair<TreeNode<int>*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto p = q.front();
        TreeNode<int>* curr = p.first;
        int hd = p.second;
        mp[hd].push_back(curr->data);
        q.pop();
        if(curr->left!=NULL) q.push({curr->left,hd-1});
        if(curr->right!=NULL) q.push({curr->right,hd+1});
    }
    for(auto it:mp){
        vector<int> t = it.second;
        for(auto x:t){
            ans.push_back(x);
        }
    }
    return ans;
}
