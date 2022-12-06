#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class example{
    public:
    int a;
    int b;
    int c;
    int*d;
};
int main()
{
        /* code here */
        /*int* arr = new int[5];
        cout<<sizeof(arr)<<endl;
        int i = 10;
        cout<<sizeof(i)<<endl;
        int *ptr = &i;
        cout<<sizeof(ptr)<<endl;
        char ch='q';
        cout<<sizeof(ch)<<endl;
        char *p = &ch;
        cout<<sizeof(p)<<endl;
        

        int *p;
        cout<<p<<endl;
        cout<<*p<<endl;
        cout<<sizeof(p)<<endl;
        int a;
        cout<<a<<endl;

        int a,b,c;
        a=b=c=10;
        cout<<a<<" "<<b<<" "<<c<<endl;d

        int d,e;
        (d=e)=100;
        cout<<d<<" "<<e<<" "<<endl;
        */

       example e1;
       cout<<sizeof(example)<<endl;
       cout<<sizeof(e1)<<endl;

       int arr[]={10,20,30,40,50};
       cout<<sizeof(arr)<<endl;



    return 0;
}