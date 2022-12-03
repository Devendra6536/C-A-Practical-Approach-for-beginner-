#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

/* Algorithm
first we run a loop from 1 to =r;
then apply  this formula
    ans = ans*(N-r+i)/i;*/
int main()
{
        /* code here */
        int N=10;
        int r =3;
        int ans=1;
        for(int i=1;i<=r;i++){
            ans = ans*(N-r+i)/i;
        }
        cout<<ans<<" ";
    return 0;
}