#include<bits/stdc++.h>
/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
TreeNode<int>* build(vector<int> pos,int s,int e,map<int,int> &m,int &posInd){
    if(s>e) return NULL;
    //create node
    TreeNode<int>* root = new TreeNode<int>(pos[posInd]);
    int ind = m[pos[posInd]];
    posInd--;
    root->right = build(pos,ind+1,e,m,posInd);
    root->left = build(pos,s,ind-1,m,posInd);
    return root;
}


TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& pos, vector<int>& in) 
{
	// Write your code here.
    int posInd=0;
    map<int,int> m;
    posInd = in.size()-1;
    for(int i=0;i<in.size();i++) m[in[i]] = i;
    return build(pos,0,in.size()-1,m,posInd);
}
