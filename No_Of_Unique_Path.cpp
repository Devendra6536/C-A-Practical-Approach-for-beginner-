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
int main()
{
        /* code here */
cout<<uniquePaths(3,2);
    return 0;
}