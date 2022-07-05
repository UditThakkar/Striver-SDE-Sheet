class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        if(!root) return ans;
        
        ans = inorderTraversal(root->left);
        ans.push_back(root->val);
        vector<int> temp = inorderTraversal(root->right);
        ans.insert(ans.end(),temp.begin(),temp.end());
        
        return ans;
    }
};
