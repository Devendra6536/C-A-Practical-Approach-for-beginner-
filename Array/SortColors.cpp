#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void sort(vector<int> & nums,int n){

    int low   = 0;
    int mid   = 0;
    int high = n-1;

    while(mid <= high)
    {
        if(nums[mid]==0) swap(nums[low++],nums[mid++]);
        else if(nums[mid]==1) mid++;
        else if(nums[mid]==2) swap(nums[mid],nums[high--]);
    }
}
int main()
{
        /* code here */
        vector<int>nums{0,1,2,2,2,1,1,0,0,0,2,1,1};
        int n = nums.size();
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        sort(nums,n);
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }

    return 0;
}