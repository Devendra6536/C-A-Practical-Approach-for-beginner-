#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void view(Node* node,int level,vector<int>&v){
    if(node == NULL) return;
    if(v.size() == level) v.push_back(node->data);
    view(node->right,level+1,v);
    view(node->left,level+1,v);
}
vector<int> leftView(Node *root)
{
    vector<int>v;
    view(root,0,v);
    return v;
   // Your code here
}
int main()
{
        /* code here */
        

    return 0;
}