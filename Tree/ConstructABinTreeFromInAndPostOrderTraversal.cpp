#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
TreeNode* make_tree(vector<int>& inorder,int in_st,int in_end,vector<int>& postorder,int post_st, int post_end, map<int,int>&mpp){
        if(in_st > in_end || post_st > post_end) return NULL;
        
        TreeNode* root = new TreeNode(postorder[post_end]);
        
        int in_root = mpp[root->val];
        int root_left = in_root - in_st;
        
        root->left = make_tree(inorder, in_st, in_root-1, postorder, post_st, post_st+root_left-1,  mpp);
        root->right = make_tree(inorder, in_root+1, in_end, postorder,  post_st+root_left, post_end-1, mpp);
        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>mpp;
        for(int i=0;i<inorder.size();i++) mpp[inorder[i]] = i;
        
    return make_tree(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1, mpp);
    }
int main()
{
        /* code here */

    return 0;
}