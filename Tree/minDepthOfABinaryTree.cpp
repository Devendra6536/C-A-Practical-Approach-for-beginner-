#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
    queue<TreeNode*> Q;
    Q.push(root);
    int i = 0;
    while (!Q.empty()) {
        i++;
        int k = Q.size();
        for (int j=0; j<k; j++) {
            TreeNode* rt = Q.front();
            Q.pop();
            if (rt->left) Q.push(rt->left);
            if (rt->right) Q.push(rt->right);
            if (rt->left==NULL && rt->right==NULL) return i;
        }
    }
        return -1;
    }
int main()
{
        /* code here */

    return 0;
}