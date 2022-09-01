#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        queue<pair<TreeNode*,int>>q;
        int ans=0;
        q.push({root,0});
        while(!q.empty()){
            
            int size = q.size();
            int mmin = q.front().second;
            int first,last;
            for(int i=0;i<size;i++){
                long long curr_id = q.front().second-mmin;
                TreeNode* node = q.front().first;
                q.pop();
                
                if(i==0) first = curr_id;
                if(i ==size-1) last = curr_id;
                
                if(node->left)  q.push({node->left,curr_id*2+1});
                if(node->right) q.push({node->right,curr_id*2+2});
                
            }
            ans = max(ans,last-first+1);
        }
        return ans;
    }
int main()
{
        /* code here */

    return 0;
}