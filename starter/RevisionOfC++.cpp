#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
        /* code here */
        int a;
        short int b;
        long long int c;
        long double d;
        cout<<sizeof(a)<<endl;
        cout<<sizeof(b)<<endl;
        cout<<sizeof(c)<<endl;
        cout<<sizeof(d)<<endl;
        cout<<"\a"<<endl;

        typedef int feet;
        feet distance;
        cout<<sizeof(distance)<<endl;


        for(int i=0;i<10;i++){
            int j = rand();
            cout<<j<<endl;
        }

    return 0;
}