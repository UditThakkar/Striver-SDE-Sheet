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

TreeNode<int>* fun(TreeNode<int>* root,int &k){
    if(root==NULL){
        return NULL;
    }
    TreeNode<int>* right = fun(root->right,k);
    if(right!=NULL) return right;
    k--;
    if(k==0) return root;
    return fun(root->left,k);
}



int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
    TreeNode<int> *curr = fun(root,k);
    if(curr==NULL) return -1;
    return curr->data;
}
