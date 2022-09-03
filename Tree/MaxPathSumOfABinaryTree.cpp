#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int getMax(TreeNode* root,int &maxSum){
        if(root == NULL) return 0;
        int left = max(0,getMax(root->left,maxSum));
        int right = max(0,getMax(root->right,maxSum));
        maxSum = max(maxSum,left+right+root->val);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        getMax(root,maxSum);
        return maxSum;
    }
int main()
{
        /* code here */

    return 0;
}