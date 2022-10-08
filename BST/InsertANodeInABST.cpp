#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
TreeNode* insertIntoBST(TreeNode* root, int val) {
            if(root == NULL) return new TreeNode(val);
        
        TreeNode* temp = root;
        while(true){
            if(temp->val >= val){
                if(temp->left) temp = temp->left;
                else{
                    temp->left = new TreeNode(val);
                    break;
                }
            }
            else{
                if(temp->right) temp = temp->right;
                else{
                    temp ->right = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
int main()
{
        /* code here */

    return 0;
}