#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
        /* code here */
// Moore voting alo=gorithm
vector<int>nums{1,1,2,1,1,2,1,3,1,2,};
int n = nums.size();
int cnt=0,ele;
for(int i=0;i<n;i++){
    if(cnt==0) ele = nums[i];
    if(ele == nums[i]) cnt+=1;
    else cnt-=1;
}
cout<<"Majority Element is "<<ele;
    return 0;
}