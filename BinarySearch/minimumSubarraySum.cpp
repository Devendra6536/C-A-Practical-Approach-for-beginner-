#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
    
        int n = nums.size();
        int l=0,sum=0,r=0;
        int len = INT_MAX;
        
        while(r<n){
            sum+=nums[r++];
            
            while(sum >= target)
            {
                len = min(len,r-l);
                sum -=nums[l++];
            }
        }
        return len == INT_MAX ? 0 : len ;
    }
int main()
{
        /* code here */
    vector<int>nums{2,3,1,2,4,3};
    int khoj = 7;
    cout<<"the length of the sum  subarray is equal to " << minSubArrayLen(khoj,nums);

    return 0;
}