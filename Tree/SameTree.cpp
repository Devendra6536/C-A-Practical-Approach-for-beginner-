#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// check whether two tree is identical or Not
bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        else if(p!=NULL && q==NULL) return false;
        else if(p==NULL && q!=NULL) return false;
        else if(p && q && p->val != q->val) return false;
        
          if(isSameTree(p->left,q->left) == false) return false;
          if(isSameTree(p->right,q->right) == false) return false;

        return true;
    }
int main()
{
        /* code here */

    return 0;
}