/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int res = 0;
    BinaryTreeNode<int> * curr = node;
    while(curr!=NULL){
        if(curr->data==x) return x;
        else if(curr->data<x){
            curr = curr->right;
        }
        else{
            res = curr->data;
            curr = curr->left;
        }
    }
    if(res==0) return -1;
    return res;
}
