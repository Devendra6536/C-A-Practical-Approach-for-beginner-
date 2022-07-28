#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int RemoveRepeatedNumber(vector<int>&nums){
    int i=0;
    for(int j=1 ; j < nums.size(); j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;
}
int main()
{
        /* code here */
        vector<int>nums{1,1,1,2,2,2,3,3,3,4,4};
        cout<<"length of the unique array : "<<RemoveRepeatedNumber(nums);

    return 0;
}