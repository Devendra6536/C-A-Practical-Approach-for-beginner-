#include<iostream>
#include<bits/stdc++.h>
#include<vector>
 
using namespace std;



int search(vector<int>& nums, int target) {
        
        int high = nums.size()-1;
        int low = 0;
        int mid;
        
        while(low  <= high){
            mid = low + (high - low)/2;
            
            if(nums[mid] == target) return mid;
            
            if(nums[low] <= nums[mid])
            {
                if(nums[low] <= target &&  target <= nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else 
            {
                if(target >= nums[mid] && target <= nums[high] )
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
                
            }
        }
        return -1;
        
    }
int main()
{
        /* code here */

        vector<int> nums {4,5,6,7,0,1,2};
        cout<<search(nums,0);

    return 0;
}