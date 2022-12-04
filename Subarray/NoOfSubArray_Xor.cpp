#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int solve(vector<int>&A,int b){
    long long c=0;
    for(int i=0;i<A.size();i++){
        int curr_Xor = 0;
        for(int j=i;j<A.size();j++){
            curr_Xor^=A[j];
            if(curr_Xor == b){
                c++;
            }
        }
        
    }
    return c;
}
int count(vector<int>v,int b){
    int cnt=0;
    int n = v.size();
    int xxor = 0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        xxor^=v[i];
        if(xxor==b) cnt++;
        if(mp.find(xxor^b) != mp.end()) cnt+=mp[xxor^b];
        mp[xxor]++;
    }
    return cnt;
}
int main()
{
        /* code here */
vector<int>A{4,2,2,6,4};
    cout<<"the no of subarray with xor "<<solve(A,6);
    cout<<"the no of subarray with xor "<<count(A,6);
    return 0;
}