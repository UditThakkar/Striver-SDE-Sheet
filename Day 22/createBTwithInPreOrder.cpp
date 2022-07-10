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
TreeNode<int> *fun(vector<int> &in, vector<int> &pre,int is,int ie,int &ind){
    if(is>ie){
        return NULL;
    }
    TreeNode<int> * root = new TreeNode<int>(pre[ind++]);
    int inind;
    for(int i=is;i<=ie;i++){
        if(in[i]==root->data){
            inind = i;
            break;
        }
    }
    root->left = fun(in,pre,is,inind-1,ind);
    root->right = fun(in,pre,inind+1,ie,ind);
    return root;
}


TreeNode<int> *buildBinaryTree(vector<int> &in, vector<int> &pre)
{
	//    Write your code here
    int n = pre.size();
    int ind = 0;
    return fun(in,pre,0,n-1,ind);
}
