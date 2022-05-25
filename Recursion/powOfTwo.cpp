#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
bool isPowOfTwo(int n){
    if(n<1) return false;
    while (n%2 == 0)
    {
        n/=2;
    }
    return n==1;
    
}
int main()
{
        /* code here */
    int n;
    cout<<" Enter a number ";
    cin>>n;
    if(isPowOfTwo(n)) cout<<"True";
    else cout<<"false";
    return 0;
}       