#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        TreeNode* node = root;
        
        while(node)
        {
            if(node->left == NULL)
            {
                v.push_back(node->val);
                node = node->right;
            }
            else
            {
                TreeNode* prev = node->left;
                
                while(prev->right && prev->right!=node ) prev = prev->right;
                
                if(prev->right == NULL)
                {
                    prev->right = node;
                    node = node->left;
                }
                else
                {
                    prev->right = NULL;
                    v.push_back(node->val);
                    node = node->right;
                }
            }
        }
        
        return v;
    }
int main()
{
        /* code here */

    return 0;
}