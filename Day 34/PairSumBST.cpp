#include<bits/stdc++.h>
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public: 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/

bool fun(BinaryTreeNode<int> *root, int k,unordered_set<int> &s){
    if(root==NULL) return false;
    if(fun(root->left,k,s)) return true;
    if(s.find(k-root->data)!=s.end()) return true;
    else{
        s.insert(root->data);
    }
    return fun(root->right,k,s);
}

bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    unordered_set<int> s;
    return fun(root,k,s);
}
