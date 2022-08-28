#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void print(vector<int>V){
	for(int i=0;i<V.size();i++){
		cout<<V[i]<<" ";
	}
	if(V.size()==0){
		cout<<"{}";
	}
	
	cout<<endl;
}
void f(int index,vector<int>V,int arr[],int n){
	if(index>=n){
		print(V);
		return;
	}
	V.push_back(arr[index]);
	f(index+1,V,arr,n);
	V.pop_back();
	f(index+1,V,arr,n);			
}

void f1(int index,vector<int>V,int arr[],int n,int sum,int s){
	if(index==n){
		if(s==sum){
		print(V);
	}
	return;
	}
	V.push_back(arr[index]);
	s+=arr[index];
	f1(index+1,V,arr,n,sum,s);
	s-=arr[index];
	V.pop_back();
	f1(index+1,V,arr,n,sum,s);			
}


bool f2(int index,vector<int>V,int arr[],int n,int sum,int s){
	if(index==n){
		if(s==sum){
		print(V);
		return true;
	}
	return false;
	}
	V.push_back(arr[index]);
	s+=arr[index];
	if(f2(index+1,V,arr,n,sum,s) == true) return true;
	s-=arr[index];
	V.pop_back();
	if(f2(index+1,V,arr,n,sum,s) ==true	) return true;
	return false;		
}

int f3(int index,int arr[],int n,int sum,int s){
	if(index==n){
		if(s==sum){return 1;}
		else return 0;
	}
	s+=arr[index];
	 int l = f3(index+1,arr,n,sum,s);
	s-=arr[index];
	int r = f3(index+1,arr,n,sum,s);
return l+r;
}


int main(){
	
	int n;
	cout<<"Enter the size of array";
	cin>>n;
	int a[n];
	int s,sum=3;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int>V;
	cout<<"Subsequence are "<<endl;
	f1(0,V,a,n,sum,0);
//f2(0,V,a,n,sum,0);
// int count = f3(0,a,n,sum,0);
// cout<<count;
}
