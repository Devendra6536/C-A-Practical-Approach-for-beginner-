#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int maxISum(vector<int>& nums){
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i=0;i<nums.size();i++){
        currSum += nums[i];
        if(currSum > maxSum) maxSum  = currSum;
        if(currSum < 0) currSum=0;

    }
    return maxSum;
}
int main()
{
        /* code here */
        vector<int>nums{-2,1,-3,4,-1,2,1,-5,4};
        cout<<maxISum(nums);

    return 0;
}