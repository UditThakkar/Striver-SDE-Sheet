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

// TreeNode<int>* fun(vector<int> &arr,int start,int end){
//     if(start>end) return NULL;
//     else{
//         int mid = (start+end)/2;
//         TreeNode<int>* root = new TreeNode<int>(arr[mid]);
//         root->left = fun(arr,start,mid-1);
//         root->right = fun(arr,mid+1,end);
//         return root;
//     }

// }
TreeNode<int>* build(vector<int> &a,int &i,int bound){
    if(i==a.size() or a[i]>bound) return NULL;
    TreeNode<int>* root = new TreeNode<int>(a[i++]);
    root->left = build(a,i,root->data);
    root->right = build(a,i,bound);
    return root;
}


TreeNode<int>* preOrderTree(vector<int> &pre){
    // Write your code here.
//     sort(pre.begin(),pre.end());
//     return fun(pre,0,pre.size()-1);
    int i = 0;
    return build(pre,i,INT_MAX);
}
