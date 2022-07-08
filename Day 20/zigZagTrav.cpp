#include<bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int> ans;
    if(root==NULL) return ans;
    queue<BinaryTreeNode<int>*> q;
    stack<int> s;
    bool rev = false;
    q.push(root);
    while(!q.empty()){
        int len = q.size();
        for(int i=0;i<len;i++){
            BinaryTreeNode<int> *curr = q.front();
            q.pop();
            if(rev){
                s.push(curr->data);
            }
            else{
                ans.push_back(curr->data);
            }
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
        if(rev){
            while(!s.empty()){
                ans.push_back(s.top());
                s.pop();
            }
        }
        rev = !rev;
    }
    return ans;
}
