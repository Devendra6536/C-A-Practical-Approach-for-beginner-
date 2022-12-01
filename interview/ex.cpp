#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void bubbleSort(int arr[], int n){
    if(n==0 || n==1) return ;
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]) 
        {
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}
int main()
{

        /* code here */
    int arr[5] = {9,7,1,15,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    bubbleSort(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
