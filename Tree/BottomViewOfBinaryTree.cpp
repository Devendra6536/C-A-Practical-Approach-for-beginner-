#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>v;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node* temp = it.first;
            int line = it.second;
            mp[line] = temp->data;
            if(temp->left) q.push({temp->left,line-1});
            if(temp->right) q.push({temp->right,line+1});
        }
        for(auto it:mp){
            v.push_back(it.second);
        }
        return v;
    }
int main()
{
        /* code here */

    return 0;
}