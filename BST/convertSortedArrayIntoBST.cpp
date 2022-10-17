#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// Time Complexxity = O(N);
TreeNode* createBST(vector<int>nums,int start,int end){
        if(start > end) return NULL;
        
        int mid = (start+end)/2;
        TreeNode* temp = new TreeNode(nums[mid]);
        temp->left = createBST(nums,start,mid-1);
        temp->right = createBST(nums,mid+1,end);
        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createBST(nums,0,nums.size()-1);
        
    }
int main()
{
        /* code here */

    return 0;
}