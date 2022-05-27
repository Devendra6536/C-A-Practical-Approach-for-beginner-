#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int tribonacci(int n){

    if(n==0) return n;
    else if(n==1 || n==2) return 1;
// store the numer (Memoization).
    vector<int> dp(n+1);
    dp[0]=0; dp[1]=dp[2]=1;

    for (int i = 3; i <= n; i++)
    {
        /* code */
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
     }
     return dp[n];
    
}
int main()
{
        /* code here */
        int n;
        cout<<"Enter a number";
        cin>>n;
        cout<<tribonacci(n);

    return 0;
}