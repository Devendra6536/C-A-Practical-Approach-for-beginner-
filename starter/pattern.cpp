#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
        /* code here */
        int n = 21;
        int j,i;
        for(i=0;i<=n/2;i++){
            cout<<"* ";
            int p = 1;
            for(j=0;j<i;j++){
                cout<<p<<" ";
                p++;
            }
            p--;
            for(int k=0;k<=i-2;k++){
                p--;
                cout<<p<<" ";
            }

            if(i!=0) cout<<"*";
            cout<<endl;
        }
            int l=3;
        for(int k=i;k<n;k++){
            int p=1;
            cout<<"* ";
            for( j=0;j<=k-l;j++){
                cout<<p<<" ";
                p++;
            }
                l += 2;
                p--;
                for(int l=0;l<j-1;l++){
                    p--;
                    cout<<p<<" ";
                }
            if(k!=n-1) cout<<"* "<<endl;
        }

    return 0;
}