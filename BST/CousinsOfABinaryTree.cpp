#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int xparent,yparent,xdepth,ydepth;
     void checkCousins(TreeNode* root, int x,int y, int depth,int par_val){
        if(root==NULL) return;
        
        if(root->val == x){
            xdepth = depth;
            xparent = par_val;
            return;
        }
         if(root->val == y){
             ydepth = depth;
             yparent = par_val;
             return;
         }
        checkCousins(root->left, x, y, depth+1, root->val);
        checkCousins(root->right, x, y, depth+1, root->val);     
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val == x ||root->val ==y) return false;
        
        checkCousins(root,x,y,0,0);
        
        if(xdepth == ydepth && xparent != yparent) return true;
        else return false;
    }   
int main()
{
        /* code here */

    return 0;
}