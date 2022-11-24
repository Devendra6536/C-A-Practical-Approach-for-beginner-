#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
        int n;
        cout<<"Enter the Number "<<endl;
        cin>>n;
        for(int i=0;i<=n+2;i++){
            for(int j=0;j<n;j++){
                if(i==0) cout<<"*";
                else if(j==n/2) cout<<"@";
                // else if(j==0||j==1) cout<<"|";
                else cout<<" ";
            }
            cout<<endl;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0||j==n) cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }

    return 0;
}