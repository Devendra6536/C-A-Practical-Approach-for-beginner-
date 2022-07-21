#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int bestTime(vector<int>nums){
    int min = INT_MAX;
    int profit  = 0;

    for(int i=0 ; i<nums.size(); i++)
    {
        if(nums[i] < min ) min = nums[i];
        profit = max(profit,nums[i]-min);
    }
    return profit;
}
int main()
{
        /* code here */
        vector<int>nums{7,6,4,3,1};
        cout<<bestTime(nums);

    return 0;
}