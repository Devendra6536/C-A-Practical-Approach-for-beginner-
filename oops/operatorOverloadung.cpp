#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
/*class operatorOverloadung
{
private:
    /* data 
    int num = 45;
public:
int operator ++(){
    ++num;
    return num;
}

};*/

class realandimg{
    private:
        int real,img;
    public:
       realandimg():real(0),img(0){};
       void setdata(int i,int j){
        real = i;
        img = j;
       }
        realandimg operator +( const realandimg &r){
            realandimg temp;
            temp.real = real + r.real;
            temp.img = img + r.img;
            return temp;
        }
        void print(){
            cout<<real<<"+i"<<img;
        }
};

int main()
{
        /* code here */
        // operatorOverloadung o;
        // cout<<++o;
        realandimg ri;
        realandimg ri1;
        ri1.setdata(15,25);
        realandimg r3 = ri+ri1;
        r3.print();


    return 0;
}