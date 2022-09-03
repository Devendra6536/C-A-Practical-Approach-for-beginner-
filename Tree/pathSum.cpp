#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool getPath(TreeNode* root, int sum,  int targetSum){
        if(root == NULL) return false;
        sum +=root->val;
        if( !root->left && !root->right) return sum == targetSum;  
        return getPath(root->left,sum,targetSum) || getPath(root->right,sum,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        return getPath(root,0,targetSum);
    }
int main()
{
        /* code here */

    return 0;
}