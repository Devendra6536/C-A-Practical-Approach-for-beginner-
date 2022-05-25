#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int summ(int A[],int i,int n){
	static int sum=0;
	if(i==n)return sum;
	sum+=A[i];
	summ(A,i+1,n);	
}
int summm(int i,int sum){
	if(i<1)return sum;
	summm(i-1,sum+i);
}
int f(int n){
	if(n==0)return 0;
	return n+f(n-1);
}
int main()
{ 
int a[] = {4,5,7,8,9};
int sum;
sum = summ(a,0,3);
int n;
cin>>n;
sum = summm(n,0);
sum = f(n);
cout<<"the sum of first N number is  "<< sum;
    return 0;
}
