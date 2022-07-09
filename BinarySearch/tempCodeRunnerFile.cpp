#include<iostream>
#include<bits/stdc++.h>
#include<vector>
 
using namespace std;
int firstPosition(vector<int>& nums,int low,int high, int target){
        
        int mid;
        int start=-1;        
        while(low <= high )
        {
            mid = low + (high-low)/2;
            
            if(nums[mid] == target)
            {
                start = mid;
                high = mid-1;
            }
            else if(target > nums[mid])
            {
                low = mid +1;
            }
            else{
                high = mid-1;
            }
        }
        return start;
    }

vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int start = firstPosition(nums,0,nums.size()-1,target);
        vector<int>v;
        
        for(int i=start;i<nums.size();i++)
        {
            if(nums[i]==target){
            v.push_back(i);     
            }
            else{
                break;
            }
            
        }
        return v;
    
    }
int main()
{
        /* code here */

    vector<int>nums{1,2,5,2,3};
    int target = 2;
    vector<int>ans;
     ans = targetIndices(nums,target);
    
    /*for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }*/
    cout<< target + " is Present at these indices in this array ";
    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}