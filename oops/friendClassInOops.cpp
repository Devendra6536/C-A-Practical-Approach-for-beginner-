#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class A{
    int x=50;
    friend class B;
};

class B{
    int y;

    public:
        void setdata(int y){
            this->y = y;
        }
        int add(A &a){
            return a.x +y;
        }
};
int main()
{
        /* code here */
        B b;
        A a;
        b.setdata(10);
        cout<<"The  sum is "<< b.add(a);

    return 0;
}