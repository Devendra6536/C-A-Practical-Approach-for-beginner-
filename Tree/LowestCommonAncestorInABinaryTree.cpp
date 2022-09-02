#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL ) return NULL;
        
        if(root == p || root ==p ) return p;
        if(root == q || root == q ) return q;
        
        TreeNode* l = lowestCommonAncestor(root->left,p,q);
        TreeNode* r = lowestCommonAncestor(root->right,p,q);
        if(l && r==NULL) return l;
        else if(l==NULL && r) return r;
        else if(l && r) return root;        
        
        return NULL;
        
    }
int main()
{
        /* code here */

    return 0;
}