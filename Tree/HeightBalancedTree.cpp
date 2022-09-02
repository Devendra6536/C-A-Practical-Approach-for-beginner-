#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int height(TreeNode* root){
        if(root == NULL) return 0;
        int lh = height(root->left);
        if(lh == -1 ) return -1;
        int rh = height(root->right);
        if( rh == -1) return -1;
        if(abs(lh-rh) > 1) return -1;
       
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        if(height(root) != -1) return true;
        else return false;
    }
};
int main()
{
        /* code here */

    return 0;
}