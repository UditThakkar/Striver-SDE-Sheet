/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
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
                ans.push_back(curr->val);
                st.pop();
                if(curr->right!=NULL){
                    st.push(curr->right);
                    curr->right = NULL;
                }
            }
        }
        return ans;
    }
};
