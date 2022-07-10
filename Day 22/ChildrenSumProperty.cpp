/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void fun(BinaryTreeNode < int > *root,int diff){
    if(root->left!=NULL){
        root->left->data += diff;
        fun(root->left,diff);
    }
    else if(root->right!=NULL){
        root->right->data += diff;
        fun(root->right, diff);
    }
}


void change(BinaryTreeNode < int > *root){
    if(root==NULL or (root->left==NULL and root->right==NULL)) return;
    
    change(root->left);
    change(root->right);
    int val = 0;
    if(root->left!=NULL) val += root->left->data;
    if(root->right!=NULL) val += root->right->data;
    
    int diff = val - root->data;
    if(diff > 0){
        root->data += diff;
    }
    else{
        fun(root,-diff);
    }
}

void changeTree(BinaryTreeNode < int > * root) {
    // Write your code here.
    change(root);
}  
