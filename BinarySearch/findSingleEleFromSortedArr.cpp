#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int findSingleNumber(int arr[],int n){
    int Xor=0;
    for(int i=0;i<n;i++){
        Xor = Xor^arr[i];
    }
    return Xor;
}
int main()
{
        /* code here */
        int arr[7] = {1,1,2,3,3,4,4};
    int ans = findSingleNumber(arr,7);
    cout<<ans;

    return 0;
}   