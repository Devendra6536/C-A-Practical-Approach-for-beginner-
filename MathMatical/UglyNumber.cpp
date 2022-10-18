#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool isUgly(int n) {
        if(n == 0) return false;
        while(n%2==0) n/=2;
        while(n%3==0) n/=3;
        while(n%5==0) n/=5;
        if(n==1) return true;
        else return false;
        
    }
int main()
{
        /* code here */
        int n = 10;
        if(isUgly(n)) cout<<"the no is ugly";
        else cout<< "The No is not Ugly";

    return 0;
}