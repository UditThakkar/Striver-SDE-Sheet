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

int height(TreeNode<int> *root,int &res){
        if(root==NULL){
            return 0;
        }
        int lh=height(root->left,res);
        int rh = height(root->right,res);
        res = max(res,lh+rh);
        return 1+max(lh,rh);
    }
int diameterOfBinaryTree(TreeNode<int> *root) {
        int res = 0;
        height(root,res);
        return res;
}
