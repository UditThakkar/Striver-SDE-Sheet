#include<bits/stdc++.h>
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

bool isLeaf(TreeNode<int>* node){
    if(node->left==NULL and node->right==NULL) return true;
    else return false;
}

void addleft(TreeNode<int>* root, vector<int> &ans){
    TreeNode<int>* curr = root->left;
    while(curr){
        if(!isLeaf(curr)) ans.push_back(curr->data);
        if(curr->left) curr = curr->left;
        else curr = curr->right;
    }
}

void addleaf(TreeNode<int>* root, vector<int> &ans){
    if(isLeaf(root)){
        ans.push_back(root->data);
        return;
    }
    if(root->left) addleaf(root->left,ans);
    if(root->right) addleaf(root->right,ans);
}

void addright(TreeNode<int>* root, vector<int> &ans){
    TreeNode<int>* curr = root->right;
    stack<int> st;
    while(curr){
        if(!isLeaf(curr)) st.push(curr->data);
        if(curr->right) curr = curr->right;
        else curr = curr->left;
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
}

vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    vector<int> res;
    if(root==NULL) return res;
    if(!isLeaf(root)) res.push_back(root->data);
    addleft(root,res);
    addleaf(root,res);
    addright(root,res);
    return res;
}
