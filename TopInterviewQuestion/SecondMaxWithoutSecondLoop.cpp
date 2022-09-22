#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int SecondMaxElement(int arr[],int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }else if(arr[i] > max2 && arr[i]!=max1){
            max2 = arr[i];
        }
    }
    return max2;
}
int main()
{
        /* code here */

    int arr[] = {8,6,3,0,8,3,4,6,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    string
    cout<<"The second max Element  is "<<SecondMaxElement(arr,size);
    return 0;
}