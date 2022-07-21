/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/
bool f(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    if(!root1) return !root2;
    if(!root2) return !root1;
    return (root1->data == root2->data) && f(root1->left, root2->right) && f(root1->right, root2->left);
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.    
    if(!root) return true;
    return f(root->left, root->right);
}
