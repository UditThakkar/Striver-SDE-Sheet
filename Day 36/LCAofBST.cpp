/************************************************************
    Following is the Binary Search Tree node structure
    
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

TreeNode<int>* lca(TreeNode<int>* root,int n1,int n2){
    if(root==NULL) return NULL;
    if(root->data==n1 or root->data==n2){
        return root;
    }
    TreeNode<int>* lca1 = lca(root->left,n1,n2);
    TreeNode<int>* lca2 = lca(root->right,n1,n2);
    
    if(lca1!=NULL and lca2!=NULL) return root;
    if(lca1!=NULL) return lca1;
    else return lca2;
}

TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* p, TreeNode<int>* q)
{
	// Write your code here
    int n1 = p->data;
    int n2 = q->data;
    return lca(root,n1,n2);
}
