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

void fun(TreeNode<int> *root, vector<int> &trav){
    if(root==NULL) return;
    fun(root->left,trav);
    trav.push_back(root->data);
    fun(root->right,trav);
}

int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    vector<int> trav;
    fun(root,trav);
    return trav[k-1];
}


// efficient

TreeNode<int> *fun(TreeNode<int> *root, int &k){
    if(root==NULL)
    return NULL;
    
    TreeNode<int> *left=fun(root->left,k);
    if(left!=NULL)
    return left;
    k--;
    if(k==0)
    return root;
    
    return fun(root->right,k);
}

int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    TreeNode<int> *curr = fun(root,k);
    return curr->data;
}
