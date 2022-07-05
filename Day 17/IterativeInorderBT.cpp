/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
//         vector<int> ans;
//         if(!root) return ans;
//         ans = getInOrderTraversal(root->left);
//         ans.push_back(root->data);
//         vector<int> temp = getInOrderTraversal(root->right);
//         ans.insert(ans.end(),temp.begin(),temp.end());
        
//         return ans;
    if(root==NULL) return {};
    vector<int> ans;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        TreeNode* curr = st.top();
        if(curr->left!=NULL){
            st.push(curr->left);
            curr->left = NULL;
        }
        else{
            ans.push_back(curr->data);
            st.pop();
            if(curr->right!=NULL){
                st.push(curr->right);
                curr->right = NULL;
            }
        }
    }
    return ans;
}
