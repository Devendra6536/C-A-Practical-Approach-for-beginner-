#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void check(TreeNode* root,vector<int>&v){
        if(!root) return;
        
        check(root->left,v);
        v.push_back(root->val);
        check(root->right,v);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>v;
        check(root,v);
        for(int i=0;i<v.size()-1;i++){
            if(v[i] >=v[i+1]) return false;
        }
        return true;
        
    }
int main()
{
        /* code here */

    return 0;
}