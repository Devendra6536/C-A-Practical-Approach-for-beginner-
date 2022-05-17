#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
bool checkPerfectSquare(int num){
    int left =0;
    int right = num;

    if(num==1) return true;

    while (left < right-1)
    {
        /* code */
        long int mid  = left + (right-left)/2;
        long result = mid*mid;

        if(result==num) return true;
        if(result>num) right = mid;
        else left = mid;
    }
    return false;
    
}
int main()
{
        /* code here */
int num;
cout<<"Enter a square";
cin>>num;
checkPerfectSquare(num)?cout<<"yes":cout<<"No";
    return 0;
}