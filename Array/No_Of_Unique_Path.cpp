#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
 int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r = m-1;
        double res = 1;
        
        for(int i=1;i<=r;i++){
            res= res*(N-r+i)/i;
        }
        return (int)res;
        
    }


int path(int i,int j,int m,int n){
    if(i==n-1 && j==m-1) return 1;
    else if(i>=n || j>=m) return 0;
    else return path(i+1,j,m,n)+path(i,j+1,m,m);
}
int useDPpath(int i,int j,int m,int n,vector<vector<int>>&dp){
    if(i==n-1 && j==m-1) return 1;
    
    if(i>=n || j>=m) return 0;

    if(dp[i][j]!=-1) return dp[i][j];
    else dp[i][j] =  useDPpath(i+1,j,m,n,dp)+useDPpath(i,j+1,m,m,dp);
}
int main()
{
        /* code here */
        vector<vector<int>>dp(7+1,vector<int>(3+1,-1));
cout<<uniquePaths(3,2)<<endl;
cout<<path(0,0,3,3)<<endl;
cout<<useDPpath(0,0,3,7,dp);
    return 0;
}