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

// o(N^2) solution
    sums=0;
    for(int i=0;i<n;i++){
        int currSum=0;
        vector<int>v;
        for(int j=i;j<n;j++){
            v.push_back(arr[j]);
            currSum += arr[j];
        }
        if(currSum == 6) {
            for(int k=0;k<v.size();k++){
                cout<<v[k]<<" ";
            }
            cout<<endl;
        }
            sums = max(currSum,sums);
    }
    cout<<sums<<endl; 


    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        if(currSum> maxSum) maxSum = currSum;
        if(currSum<0) currSum = 0;
    }  
    cout<<maxSum<<endl;
    return 0;
}       