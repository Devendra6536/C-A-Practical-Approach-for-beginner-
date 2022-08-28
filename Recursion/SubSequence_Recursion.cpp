#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
void print(vector<int>v){
    int sum = 0;
    int n = v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";

    // sum+=v[i];
    }
    cout<<endl;
    // cout<<sum<<endl;
    // if(v.size()==0){
	// 	cout<<"{}";
	// }
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
    int arr[] = {4,5,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>V;
    SubSequence(0,arr,V,n);

    return 0;
}