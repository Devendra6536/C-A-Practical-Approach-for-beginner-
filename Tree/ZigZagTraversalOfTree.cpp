#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool change = true;
        while(!q.empty()){
            
            int size = q.size();
            vector<int>v(size);
            
            for(int i=0;i<size;i++){
                TreeNode* it = q.front();
                q.pop();
                
                int index = (change) ? i : (size-1-i);
                v[index] = it->val;
                
                if(it->left) q.push(it->left);
                if(it->right) q.push(it->right);
            }
            
            ans.push_back(v);
            change = !change;
        }
        return ans;
    }
int main()
{
        /* code here */

    return 0;
}