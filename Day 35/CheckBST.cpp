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

bool fun(BinaryTreeNode<int> *root,int minr,int maxr){
    if(root==NULL) return true;
    if(root->data<minr or root->data>maxr) return false;
    
    bool left = fun(root->left,minr,root->data);
    bool right = fun(root->right,root->data,maxr);
    return left and right;
}

bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    int minr = INT_MIN;
    int maxr = INT_MAX;
    return fun(root,minr,maxr);
}
