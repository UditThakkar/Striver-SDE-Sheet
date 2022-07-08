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
int ht(BinaryTreeNode<int>* root){
    if(root==NULL) return 0;
    return 1+max(ht(root->left),ht(root->right));
}


bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    if(root==NULL) return true;
    int lh = ht(root->left);
    int rh = ht(root->right);
    
    return (abs(lh-rh)<=1 and isBalancedBT(root->left) and isBalancedBT(root->right));
}
