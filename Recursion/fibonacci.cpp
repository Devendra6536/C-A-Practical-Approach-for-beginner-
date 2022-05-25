#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
	if(n<=1) return n;
	return fibonacci(n-1)+fibonacci(n-2);
}
void fibo(int n){
	int n1 = 0;
	int n2 = 1;
	int n3;
	cout<<n1<<" "<<n2<<" ";
for(int i=2;i<n;i++){
		 n3 = n2+n1;
		cout<< n3<<" ";
		n1 = n2;
		n2 = n3;
	}
}
int main(){
//	cout<<fibonacci(4);

fibo(5);
}
