#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class A{
    public:
        int x=25;
};
class B{
    public:
        int w = 100;
        
};
class C{
    public:
        int y=35;
};
class D {
    public:
        int z = 50;
};
class implement:public A, public B, public C, public D{
        public:
            void display(A &a, B &b, C &c, D &d){
            cout<< a.x + b.w + c.y + d.z <<endl;
        }
};
int main()
{
        /* code here */
        B b;
        A a;
        C c;
        D d;
        implement i;
        i.display(a,b,c,d);

    return 0;
}