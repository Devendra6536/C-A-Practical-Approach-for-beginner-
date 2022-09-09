#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool check(TreeNode* root, TreeNode* subRoot){
        if(root==NULL || subRoot==NULL) return root == subRoot;
        
        return (root->val == subRoot->val && check(root->left,subRoot->left) && check(root->right,subRoot->right));     
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(subRoot == NULL) return true;
        if(root == NULL) return false;
        
        if(check(root,subRoot)) return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
int main()
{
        /* code here */

    return 0;
}