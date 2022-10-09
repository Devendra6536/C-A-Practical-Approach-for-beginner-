#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool findTarget(TreeNode* root, int k) {
        if(root == NULL ) return false;
        
        queue<TreeNode*>q;
        q.push(root);
        map<int,bool>mp;
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            
            if(mp[k-it->val]) return true;
            mp[it->val] = true;
            if(it->left) q.push(it->left);
            if(it->right) q.push(it->right);
        }
        return false;
    }
int main()
{
        /* code here */

    return 0;
}