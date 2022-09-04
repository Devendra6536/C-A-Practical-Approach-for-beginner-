#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
TreeNode* Make_Tree(vector<int>&preorder, int pre_Start, int pre_End, vector<int>&inorder, int in_Start, 
                        int in_End, map<int,int>&in_Map){
            
         if(pre_Start > pre_End || in_Start > in_End) return NULL;         
         TreeNode* root = new TreeNode(preorder[pre_Start]);
         
         int in_Root = in_Map[root->val];
         int numsLeft = in_Root - in_Start;
         
         root->left = Make_Tree(preorder, pre_Start+1, pre_Start+numsLeft,inorder, in_Start,in_Root-1, in_Map);
         root->right = Make_Tree(preorder, pre_Start+numsLeft+1, pre_End,inorder,in_Root+1,in_End, in_Map);
         return root;
     }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        
        map<int,int>in_Map;
        int n = preorder.size()-1, m = inorder.size()-1;
        if(n != m) return NULL;
        for(int i=0;i<n+1;i++){
            in_Map[inorder[i]] = i;
        }
           
        return Make_Tree(preorder,0,n, inorder,0,m,in_Map);        
    }
int main()
{
        /* code here */

    return 0;
}