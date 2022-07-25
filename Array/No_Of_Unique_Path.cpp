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
int main()
{
        /* code here */
cout<<uniquePaths(3,2)<<endl;
cout<<path(0,0,3,3)<<endl;
    return 0;
}