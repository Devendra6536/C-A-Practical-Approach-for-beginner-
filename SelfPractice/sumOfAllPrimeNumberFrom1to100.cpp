#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool check(int n){
    if(n<=1) return true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
        /* code here */
        int sum = 0;
        for(int i=1;i<=100;i++){
            if(check(i) && i%10==7) sum+=i;
        }
        cout<<"The sum of all the prime number from 1-100 that have 7 at ending "<< sum<<" ";
    return 0;
}