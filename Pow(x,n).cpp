#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
double myPow(double x, int n) {
        double ans=1.0;
        if(n>0){
        for(int i=0;i<n;i++){
            ans*=x;
        }
        }
        else{
            long long n = abs(n);
            for(int i=0;i<n;i++){
                ans *=1/x; 
            }
        }
        return ans;
    }
int main()
{
        /* code here */
    cout<< myPow(2.00000,10);
    return 0;
}