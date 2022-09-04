#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// Symmetric Tree -> Means the tree is same by the center
bool check(TreeNode* root,TreeNode* rot){
        if(root == NULL || rot == NULL ) return root == rot;
        if( root->val != rot->val) return false;
        
        if(!check(root->left,rot->right) || !check(root->right,rot->left) ) return false;
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);                                                               
    }
int main()
{
        /* code here */

    return 0;
}