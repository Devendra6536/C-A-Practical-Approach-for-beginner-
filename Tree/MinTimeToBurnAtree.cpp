#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
TreeNode* makeparents(TreeNode* root,map<TreeNode*,TreeNode*>&parentmap,int start){
        queue<TreeNode*>q;
        q.push(root);
       TreeNode* res;
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            
            if(curr->val == start) res = curr;
            
            if(curr->left){
                parentmap[curr->left] = curr;
                q.push(curr->left);
            }
            if(curr->right){
                parentmap[curr->right] = curr;
                q.push(curr->right);
            }
        }
       return res;
    }
    int findAmtTime(TreeNode* root,TreeNode* start,map<TreeNode*,TreeNode*>&parentmap){
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        
        int t = 0;
        
        q.push(start);
        visited[start] = true;
        
        while(!q.empty()){
            int size = q.size();
            int flag = 0;
            
            for(int i=0;i<size;i++){
                TreeNode* curr = q.front();
                q.pop();
                
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left] = true;
                    flag = 1;
                }
                
                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right] = true;
                    flag = 1;
                }
                
                if(parentmap[curr] && !visited[parentmap[curr]]){
                    q.push(parentmap[curr]);
                    visited[parentmap[curr]] = true;
                    flag = 1;
                }
            }
            if(flag == 1) t++;
        }
        return t;
    }
    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*,TreeNode*>parentmap;
        TreeNode* target = makeparents(root,parentmap,start);            
        
        
        return findAmtTime(root,target,parentmap);
    }

int main()
{
        /* code here */

    return 0;
}