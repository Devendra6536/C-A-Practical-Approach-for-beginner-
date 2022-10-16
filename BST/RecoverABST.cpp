#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
private:
        TreeNode* first;
        TreeNode* middle;
        TreeNode* last;
        TreeNode* prev;           
public:
    void recoverTs(TreeNode* root){
        if(root == NULL) return ;
        
        recoverTs(root->left);
        if(prev != NULL && (root->val < prev->val)){
            
            // If this is first violation mark these node first and middle
            if(first == NULL){
                first = prev;
                middle = root;
            }
            else{
               // Last violation
                last = root;
            }
        }
        prev = root;
        recoverTs(root->right);
    }
    void recoverTree(TreeNode* root) {
        first = middle = last = NULL;
        prev = new TreeNode(INT_MIN);
        recoverTs(root);
        
        if(first && last) swap(first->val,last->val);
        else if(first && middle) swap(first->val,middle->val);
    }
int main()
{
        /* code here */

    return 0;
}