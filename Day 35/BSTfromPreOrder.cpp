#include<bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/

TreeNode<int>* fun(vector<int> &arr,int start,int end){
    if(start>end) return NULL;
    else{
        int mid = (start+end)/2;
        TreeNode<int>* root = new TreeNode<int>(arr[mid]);
        root->left = fun(arr,start,mid-1);
        root->right = fun(arr,mid+1,end);
        return root;
    }

}


TreeNode<int>* preOrderTree(vector<int> &pre){
    // Write your code here.
    sort(pre.begin(),pre.end());
    return fun(pre,0,pre.size()-1);
}
