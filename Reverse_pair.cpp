#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
 int reversePairs(vector<int>& nums) {
        int cnt=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>2*nums[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
int main()
{
        /* code here */
vector<int>nums{1,3,2,3,1};
cout<<reversePairs(nums);
    return 0;
}