#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
        /* code here */

        int n = 5;
        int c=n;
        int c1 = n;
        for(int i=0;i<5;i++){
            for(int j=1;j<2*n;j++){
                if(i==n-1) cout<<"*";
                else{
                    if((j==c && j<=n) || (j==c1 && j>=n)) cout<<"*";
                    else cout<<" ";
                }                
            }        
            cout<<endl;
            c--;
            c1++;
        }


        

    return 0;
}