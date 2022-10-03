#include<iostream>
#include<bits/stdc++.h>
#include<vector>
// this is pure virtual function example
using namespace std;
class A{
    public:
        virtual void display() =0;
};
class B:public A{
    public:
        void display(){
            cout<<"Child is derrived form the parent class"<<endl;
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