#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
    queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        map<int,map<int,multiset<int>>>mp;
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            TreeNode* node = it.first;
            int x = it.second.first,y = it.second.second;
            mp[x][y].insert(node->val);
            
            if(node->left) q.push({node->left,{x-1,y+1}});
            if(node->right) q.push({node->right,{x+1,y+1}});
        }
         vector<vector<int>>ans;
        for(auto p:mp){
            vector<int>col;
            for(auto q: p.second){
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
int main()
{
        /* code here */

    return 0;
}