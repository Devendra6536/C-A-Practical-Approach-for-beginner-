#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class example{
    private:
        int x,y;
    public:
        void setData(int x,int y){
            this->x = x;
            this->y = y;
        }
        friend int add(example);
};
int add(example e){
    return e.x+e.y;
}
int main()
{
        /* code here */
        example x;
        x.setData(10,25);
        cout<<add(x);

    return 0;
}