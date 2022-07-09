/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

TreeNode<int>* lca(TreeNode<int>*root, int n1 ,int n2){
    if(root==NULL)return NULL;
    if(root->data==n1||root->data==n2)
        return root;
    
    TreeNode<int> *lca1=lca(root->left,n1,n2);
    TreeNode<int> *lca2=lca(root->right,n1,n2);
    
    if(lca1!=NULL && lca2!=NULL)
        return root;
    if(lca1!=NULL)
        return lca1;
    else
        return lca2;
}

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	//    Write your code here
    TreeNode<int> * curr = lca(root,x,y);
    return curr->data;
    
}
