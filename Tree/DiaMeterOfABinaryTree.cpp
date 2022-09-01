#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int getDia(TreeNode* root,int &diameter){
        if(root==NULL) return 0;
        int lh = getDia(root->left,diameter);
        int rh = getDia(root->right,diameter);
        diameter = max(diameter,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter =0 ;
        getDia(root,diameter);
        return diameter;
    }
int main()
{
        /* code here */

    return 0;
}