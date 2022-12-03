#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
// subarray with maximum sum
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

int sums=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currSum=0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                currSum += arr[k];
                
            }
            sums = max(currSum,sums);
            cout<<endl;
        }
    }
    cout<<sums<<endl;   
    return 0;
}       