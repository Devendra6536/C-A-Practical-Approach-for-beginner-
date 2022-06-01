#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
 int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	int platefromCount = 1, result = 1;
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int i=1 ,j=0;
    	while(i<n && j<n){
    	    if(arr[i] <= dep[j]){
    	        platefromCount++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j]){
    	        platefromCount--;
    	        j++;
    	    }
    	    if(platefromCount > result){
    	        result = platefromCount;
    	    }
    	}
    	return result;
    }
int main()
{
        /* code here */
int arr[] = { 900,1100,1235};
int dep[]  = {1000, 1200, 1240};
int n = sizeof(arr)/sizeof(arr[0]);
int Plateforms = findPlatform(arr,dep,n);
cout<<"The no of Platform Required are ";
cout<<Plateforms; 
    return 0;
}