#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class exmaple{
    public:
        int a;
    exmaple(int i){
        a=i;
    }
    exmaple(exmaple &e){
        a = e.a;
    }
    void printDat(){
        cout<<"the Value of a is "<<a<<endl;
    }
    ~exmaple(){
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
        /* code here */
        exmaple e(10);
        exmaple b = e;
        b.printDat();

    return 0;
}