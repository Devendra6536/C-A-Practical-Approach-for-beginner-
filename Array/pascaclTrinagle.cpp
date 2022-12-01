#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
        /* code here */
        int n=4;
        for(int i=0;i<=n;i++){
            int res = 1;
            for(int j=0;j<i;j++){
                res*=n-j;
                res/=j+1;
            }

            cout<<res<<" ";
        }

    return 0;
}