#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void parent_make(TreeNode* root, map<TreeNode*,TreeNode*>&parent_track){
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            
            if(curr->left) {
                parent_track[curr->left] = curr;
                q.push(curr->left);
            }
            if(curr->right) {
                parent_track[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*>parent_track;
        parent_make(root,parent_track);
        
        
        unordered_map<TreeNode*, bool>visited;
        queue<TreeNode*>q;
        
        q.push(target);
        visited[target] = true;
        int curr_level = 0;
        
        while(!q.empty()){
            int size = q.size();
            if(curr_level++ == k) break;
            
            for(int i=0;i<size;i++){
                TreeNode* curr = q.front();
                q.pop();
                
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right] = true;
                }
                if(parent_track[curr] && !visited[parent_track[curr]]){
                    q.push(parent_track[curr]);
                    visited[parent_track[curr]] = true;
                }
            }
        }
        
        vector<int>Res;
        while(!q.empty()){
            Res.push_back(q.front()->val);
            q.pop();
        }
        
        return Res;
    }
int main()
{
        /* code here */

    return 0;
}