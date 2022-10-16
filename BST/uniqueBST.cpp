#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int UniqueBST(int n, vector<int>&dp){
    if(n <= 1) return 1;

    if(dp[n] != -1) return dp[n];

    int ans = 0;
    for(int i=1;i<=n;i++){
        ans += UniqueBST(i-1,dp)*UniqueBST(n-i,dp);
    }
    return dp[n] = ans;
}
int main()
{
        /* code here */
        int n{10};
        vector<int>dp(n+1,-1);
        cout<<UniqueBST(n,dp);
        int count{};
        cout<<"The value of count is "<<count;
    return 0;
}