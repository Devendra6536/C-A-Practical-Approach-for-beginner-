#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swapA(int A[],int l,int r){
	int mid = r/2;
	if(l>=r) return;
	swap(A[l],A[r]);
	swapA(A,l+1,r-1);
}
void swapB(int a[],int i,int n){
	if(i>=n/2)return;
	swap(a[i],a[n-i-1]);
	swapB(a,i+1,n);
}
int main(){
	int n;
	cin>>n;
	
	int arr[] = {4,8,75,32,15,45};
	swapB(arr,0,6);	
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
return 0;
}
