#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class A{
    public:
        virtual void display(){
            cout<<"parent class is invoked"<<endl;
        }
};
class B: public A{
    public:
        void display(){
            cout<<"Child class is invoked"<<endl;
        }
};
int main()
{
        /* code here */
        A *a;
        B b;
        a = &b;
        a->display();

    return 0;
}