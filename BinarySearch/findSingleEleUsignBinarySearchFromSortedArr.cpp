#include<iostream>
#include<bits/stdc++.h>
#include<vector>
 
using namespace std;
int singleElementFromASortedArr(vector<int> &nums){
    int high = nums.size()-1;
    int low = 0;
    int mid;

    if(high==0) return nums[0];
    else if(nums[0] != nums[1]) return nums[0];
    else if( nums[high] != nums[high-1]) return nums[high];

    while ( low <= high)
    {
        /* code */
        mid = low + (high - low)/2;

        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];
        else if( (mid%2 == 0 && nums[mid] == nums[mid+1]) ||
         (mid%2 != 0 && nums[mid] == nums[mid-1]) )
            low = mid + 1;
        else
            high  = mid - 1;
    }
    return -1;
    
}
int main()
{
        /* code here */
        vector<int>nums{1,1,2,2,3,4,4 };
        cout<<singleElementFromASortedArr(nums);
    return 0;
}           