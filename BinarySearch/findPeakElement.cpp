#include<iostream>
#include<bits/stdc++.h>
#include<vector> 
using namespace std;
int findPeakElement(vector<int>& nums) {
        
        int low = 0;
        int high = nums.size()-1;
        int mid;
        
       
        while(low < high)
        {
            mid = low + (high-low)/2;
            
            // it means that our peak element is always in the left half of the array
            if(nums[mid] > nums[mid+1]){
                high = mid;
            }
            // it means that our peak element is always in the right half of the array
            else if( nums[mid] < nums[mid+1])
            {
                low = mid+1;
            }
        }
        return low;
    }
int main()
{
        /* code here */
        vector<int> nums{1,2,1,3,5,6,4};
        cout<<"The peak Element is present at "<<findPeakElement(nums)<<"position ";

    return 0;
}