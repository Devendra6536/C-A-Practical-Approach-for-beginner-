#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Animal{
    public:
        void d1(){
            cout<<" Animal Are the friends of humans "<<endl;
        }
};
class PetAnimal{
    public:
        void pet(){
            cout<<"petAnimal are the friends of humans and provide the profit "<<endl;
        }
};
class Dog: public Animal, public PetAnimal{
    public:
        void d2(){
            cout<<" Barking.... "<<endl;

        }
        
};
class puppy:public Dog{
    public:
        void d3(){
            cout<<" weeping... "<<endl;

        }
};
int main()
{
        /* code here */
        Animal a;
        Dog d;
        puppy p;
        p.d1();
        p.d2();
        p.d3();
        p.pet();
    return 0;
}