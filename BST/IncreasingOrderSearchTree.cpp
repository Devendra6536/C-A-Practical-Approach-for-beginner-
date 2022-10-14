#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// Time Complexity is -> O(N) Space Complexity is O(N)
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

// Time Complexity is -> O(N) Space Complexity is O(1)
void inorder(TreeNode* root,TreeNode* &ans){
        if(!root) return;
        
        inorder(root->left,ans);
        ans->right = new TreeNode(root->val);
        ans = ans->right;
        inorder(root->right,ans);
    }
TreeNode* increasingBST(TreeNode* root) {
        TreeNode* temp;
        TreeNode* ans = new TreeNode();
        temp = ans;
        inorder(root,ans);
        
        return temp->right;
}
int main()
{
        /* code here */

    return 0;
}