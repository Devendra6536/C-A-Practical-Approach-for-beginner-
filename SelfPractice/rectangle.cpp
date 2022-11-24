#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
        /* code here */
    cout<<"Enter The Number "<<endl;
    int m;
    cin>>m;

    for(int i=0;i<=m;i++){
        for(int j=0;j<=m;j++){
            if(i==0||i==m||j==0||j==m) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}