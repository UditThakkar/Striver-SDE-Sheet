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
void fun(TreeNode<int>* root,int level,vector<int> &ans,int &maxlvl){
    if(root==NULL) return;
    if(maxlvl<level){
        ans.push_back(root->data);
        maxlvl = level;
    }
    fun(root->left,level+1,ans,maxlvl);
    fun(root->right,level+1,ans,maxlvl);
}

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    int maxlvl = 0;
    vector<int> ans;
    fun(root,1,ans,maxlvl);
    return ans;
}
