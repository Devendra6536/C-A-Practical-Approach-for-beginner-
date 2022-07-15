#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swapA(int A[],int l,int r){
	
	while(l<r){
		swap(A[l++],A[r--]);
	}
}
void swapB(int a[],int i,int n){
	if(i>=n/2)return;
	swap(a[i],a[n-i-1]);
	swapB(a,i+1,n);
}
int main(){
	// int n;
	// cin>>n;
	
	int arr[] = {4,8,75,32,15,45,50};
	swapA(arr,0,6);	
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
return 0;
}
