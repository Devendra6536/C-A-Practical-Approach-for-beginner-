#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class A{
    protected:
        int x=50;

        
    friend class B;
};

class B{
    int y=25;
    public:
        int add(A &a){
            return a.x +y;
        }
};
int main()
{
        /* code here */
        B b;
        A a;
        cout<<"The  sum is "<< b.add(a);

    return 0;
}