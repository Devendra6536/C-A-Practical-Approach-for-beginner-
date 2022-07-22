#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void merge(vector<int> &nums1, vector<int> & nums2,int m,int n){


    int i = m-1;
    int j = m-1;
    int k = m+n-1;
    while(i>=0 && j>=0 )
    {
        if(nums1[i] > nums2[j]) nums1[k--] = nums1[i--];
        else nums1[k--] = nums2[j--];
    }
    while(i>=0) nums1[k--] = nums1[i--];
    while(j>=0) nums1[k--] = nums2[j--];
}
int main()
{
        /* code here */
        vector<int> nums1{1,2,3,0,0,0};
        vector<int> nums2{2,5,6};

        int m = 3;
        int n = 3;
        merge(nums1,nums2,3,3);
        cout << endl;
        for (int i = 0; i <m+n ; i++) {
            cout << nums1[i] << " ";
        }

    return 0;
}