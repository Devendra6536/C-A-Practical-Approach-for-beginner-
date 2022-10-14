#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void inorder(TreeNode* root,vector<int>&v){
        if(root==NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        TreeNode* temp = new TreeNode(v[0]);
        TreeNode* ans = temp;
        for(int i=1;i<v.size();i++){
            TreeNode* t1 = new TreeNode(v[i]);
            ans->right = t1;
            ans->left = NULL;
            ans = ans->right;
        }
        return temp;
    }
int main()
{
        /* code here */

    return 0;
}