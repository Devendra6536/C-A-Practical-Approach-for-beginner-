#include<bits/stdc++.h>
using namespace std;
//character array program
int main(){
    int n;
    cout<<"Enter the size of character array";
    cin>>n;
    cin.ignore();
char arr[n+1];
cout<<"enter the characters in the array"<<endl;
cin.getline(arr,n);
cin.ignore();
cout<<"The output is:"<<endl;
cout<<arr;
return 0;
}