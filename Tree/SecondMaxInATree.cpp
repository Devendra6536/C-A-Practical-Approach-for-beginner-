#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
set<int>s;
void findMin(TreeNode* root){
        if(root == NULL) return;
        s.insert(root->val);
        findMin(root->left);
        findMin(root->right);        
    }
int findSecondMinimumValue(TreeNode* root) {
        
        findMin(root);
        if(s.size() < 1) return -1;
        auto it = s.begin();
        ++it;
        return *it;
}
int main()
{
        /* code here */

    return 0;
}