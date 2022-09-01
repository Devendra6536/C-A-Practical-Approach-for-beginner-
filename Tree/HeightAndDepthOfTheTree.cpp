#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// using pre,post,Inorder Traversal
int maxDepth(TreeNode* root) {
        if(root == NULL) return 0; 
        
        int lh = maxDepth(root->left); 
        int rh = maxDepth(root->right); 
        
        return 1 + max(lh, rh); 
    }
    
void getDepth(TreeNode* root,int D,int &ans){
        if(root == NULL) return;
        ans = max(ans,D);
        if(root->left) getDepth(root->left,D+1,ans);
        if(root->right) getDepth(root->right,D+1,ans);
        
    }
    int maxDepthUsingAnyOrder(TreeNode* root) {
        int ans = 0;
        getDepth(root,1,ans);
        return ans;
    }


    // using level order Traversal
    int maxDepthUsingLevelOrder(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
        int ans = 0;
        
        if(root == NULL) return ans;
        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            ans = max(ans,it.second);
            TreeNode* node = it.first;
            if(node->left) q.push({node->left,it.second+1});
            if(node->right) q.push({node->right,it.second+1});
            
        }
        return ans;
    }
int main()
{
        /* code here */

    return 0;
}