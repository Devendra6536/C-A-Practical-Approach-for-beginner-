#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class example{
    private:
        int x,y;
        friend int add(example);
    public:
        void setData(int x,int y){
            this->x = x;
            this->y = y;
        }
};
class examplee{
    private:
        int z,y;
        friend int add(examplee);
    public:
        void setData(int x,int y){
            this->z = x;
            this->y = y;
        }
};
int add(example e){
    return e.x+e.y;
}
int add(examplee e){
    return e.y+e.z;
}
int main()
{
        /* code here */
        example x;
        x.setData(10,25);
        examplee xx;
        cout<<add(x);
        xx.setData(98,2);
        cout<<add(xx);

    return 0;
}