#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
namespace first{
    void display(){
        cout<<"Hello this is your first name";
    }
}
namespace second{
    void display(){
        cout<<"Hello this is your second name";
    }
}
int main()
{
        /* code here */
        first::display();
        second::display();
        int a=50;
        int &b=a;
        cout<<b<<endl;
        b=60;
        cout<<b<<endl;
        cout<<a<<endl;


    return 0;
}