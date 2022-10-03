#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
        /* code here */
        int age=4;
        try
        {
            
            if(age>=18) cout<< "You are eligible for voting "<<endl;
            else throw(age);
        }
        catch(int num)
        {
            cout<<"Access is denied"<<endl;
            cout<<"your age is "<<num;
        }
        

    return 0;
}