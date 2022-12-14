#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int partition(int arr[],int l,int r){
    int pivot,down,up;
    pivot = arr[l];
    down = l;
    up = r+1;

    while(down <= up){
        do{
            down++;
        }while(arr[down]<pivot);
        do{
            up--;
        }while(arr[up]>pivot);

        if(down<up) swap(arr[down],arr[up]);
    }
    swap(arr[up],arr[down]);
    return up;
}
void Quick_sort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid = partition(arr,low,high);
        Quick_sort(arr,low,mid-1);
        Quick_sort(arr,mid+1,high);
    }
}
int main()
{
        /* code here */
        int arr[] = {10,7,8,9,1,5};
        Quick_sort(arr,0,5);
        for(int i=0;i<6;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    return 0;
}