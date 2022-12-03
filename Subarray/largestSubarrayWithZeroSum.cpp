#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int largestSubArrayWithZeroSum(vector<int> &A,int n){
    int sum=0;
    int maxx=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        sum+=A[i];
        if(sum==0) maxx = i+1;
        else{

            if(mp.find(sum) != mp.end()) maxx = max(maxx,i-mp[sum]);
            else mp[sum] = i;
        }
    }
    return maxx;
}
int main()
{
        /* code here */
        vector<int>A{1,-1,3,2,-2,-8,1,7,10,23};
cout<<"the length of the subArray"<<largestSubArrayWithZeroSum(A,A.size());

    return 0;
}