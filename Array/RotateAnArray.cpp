#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// 1,2,3,4,5,6,7
// first reverese the n-k-1 element 
// 4,3,2,1,7,6,5
// then reverse n-k to n-1 element
// 5,6,7,1,2,3,4
// Now revere whole array;
void rotateArr(int arr[],int n,int k){
        k = k%n;

        while(k--){
            int temp = arr[n-1];
            int st = arr[0];
            int i;
            for(i=n-2;i>=0;i--){
                arr[i+1] = arr[i];
            }
            arr[0] = temp;
        }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

}

void rotate(int arr[],int i,int j){
    while(i<j){
        swap(arr[i++],arr[j--]);
    }
}
void change(int arr[],int n,int k){
    k = k%n;

    rotate(arr,0,n-k-1);
    rotate(arr,n-k,n-1);
    rotate(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
        /* code here */
        int arr[]  ={ 1,2,3,4,5,6,7};
        rotateArr(arr,7,2);
        cout<<endl;
        int brr[]  ={ 1,2,3,4,5,6,7};
        change(brr,7,2);

    return 0;
}