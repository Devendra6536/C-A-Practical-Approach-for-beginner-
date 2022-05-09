#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
        /* code here */

    int arr[10];
    int n;
    cout<<"Enter size";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

int sums=0,sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<=j;k++){
                // cout<<arr[k]<<" ";
                sum += arr[k];
                
            }
            sums = max(sum,sums);
            cout<<endl;
        }
    }
    cout<<sums;
    return 0;
}       