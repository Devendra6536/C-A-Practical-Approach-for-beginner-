#include<iostream>
#include<bits/stdc++.h>
#include<string>
 
using namespace std;
int main()
{
        /* code here */
       int i;
       int j=10;
       i=(j++, j+100, 999+j);
       cout<<i;
    return 0;
}       