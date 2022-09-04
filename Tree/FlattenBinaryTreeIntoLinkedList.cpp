#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// Flatten Binary Tree Into Linked List = preOrder Traversal of Binary Tree is Linked List
TreeNode* prev = NULL;
    void flatten(TreeNode* root) {        
        if(root == NULL) return;        
    
        flatten(root->right);
        flatten(root->left);
         
        root->right = prev;
        root->left = NULL;
        prev = root;         
    }
int main()
{
        /* code here */

    return 0;
}