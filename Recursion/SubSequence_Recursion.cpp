#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
void print(vector<int>v){
    int n = v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    if(v.size()==0){
		cout<<"{}";
	}
    cout<<endl;
}
void SubSequence(int index,int arr[],vector<int>v,int n){
    if(index >= n){
       print(v);
       return; 
    }
    v.push_back(arr[index]);
    SubSequence(index+1,arr,v,n);
    v.pop_back();
    SubSequence(index+1,arr,v,n);

}

int main()
{
        /* code here */
    int arr[] = {3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>V;
    SubSequence(0,arr,V,n);

    return 0;
}