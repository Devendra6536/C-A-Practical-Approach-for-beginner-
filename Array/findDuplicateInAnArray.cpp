#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int Duplicate(vector<int>& nums){
    int s = nums[0];
    int f = nums[0];

    do{
        s = nums[s];
        f = nums[nums[f]];
    }while(s!=f);

     s = nums[0];
     while(s!=f)
     {
        s = nums[s];
        f = nums[f];
     }
     return f;
    
}
int main()
{
        /* code here */
    vector<int> vec{1,2,1,3};
    cout<<Duplicate(vec);
    return 0;
}