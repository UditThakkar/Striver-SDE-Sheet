#include<bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
//     vector<int> ans;
//     map<int,int> mp;
//     queue<pair<TreeNode<int>*,int>> q;
//     q.push({root,0});
//     while(q.empty()==false){
//         auto p=q.front();
//         TreeNode<int> *curr=p.first;
//         int hd=p.second;
//         if(mp.find(hd)==mp.end())
//             mp[hd]=(curr->val);
//         q.pop();
//         if(curr->left!=NULL)
//             q.push({curr->left,hd-1});
//         if(curr->right!=NULL)
//             q.push({curr->right,hd+1});
//     }
//     for(auto it:mp){
//         ans.push_back(it.second);
//     }
//     return ans;
        vector<int> ans;
        map<int, int> mp;
        if (root == NULL) {
            return ans;
        }
        queue<pair<TreeNode<int> *, int>> q;
        q.push({root, 0});

        while (q.size() != 0) {
            int len = q.size();
            while (len != 0) {
                pair<TreeNode<int> *, int> curr = q.front();
                q.pop();
                int hd = curr.second;
                TreeNode<int> *currNode = curr.first;
                if (mp.count(hd) == 0) {
                    mp.insert({hd, currNode->val});
                }
                if(currNode->left != NULL){
                    q.push({currNode->left, hd - 1});
                }
                if (currNode->right != NULL) {
                    q.push({currNode->right, hd + 1});
                }
                len = len - 1;
            }
        }

        for (auto x : mp) {
            ans.push_back(x.second);
        }
        return ans;
}
