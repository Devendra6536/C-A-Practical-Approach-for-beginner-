#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int countNodes(TreeNode* root) {
     if(root == NULL) return 0;
        
        int lh = leftHeight(root->left);
        int rh = rightHeight(root->right);
        
        if(lh==rh) return (2 << lh)-1;       
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    
    int leftHeight(TreeNode* root){
        if(root == NULL) return 0;
        int height = 0;
        while(root){
            height++;
            root = root->left;
        }
        return height;
    }
    int rightHeight(TreeNode* root){
        if(root == NULL) return 0;
        int height = 0;
        while(root){
            height++;
            root = root->right;
        }
        return height;
    }
int main()
{
        /* code here */

    return 0;
}