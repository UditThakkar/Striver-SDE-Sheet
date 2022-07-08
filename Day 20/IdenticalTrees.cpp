/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>

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
    };

***********************************************************/

bool identicalTrees(BinaryTreeNode<int>* r1, BinaryTreeNode<int>* r2) {
    // Write your code here. 	
    if(r1==NULL or r2==NULL) return (r1==r2);
    return ((r1->data==r2->data) and identicalTrees(r1->left,r2->left) and identicalTrees(r1->right,r2->right));
}
