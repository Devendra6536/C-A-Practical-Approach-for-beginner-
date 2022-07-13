#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

class Heap{
    public:
        int arr[100];
        int size;

        Heap(){
            arr[0] = -1;
            size = 0;
        }
        void insert(int val)
        {
            size += 1;
            int index = size;
            arr[index] = val;

            while( index > 1)
            {
                int parent = index/2;

                if(arr[parent] < arr[index] ){
                    swap(arr[parent],arr[index]);
                    index = parent;
                }
                else{
                    return;
                }
            }
        }

        void print(){
            for(int i=1;i<=size;i++){
                cout << arr[i] <<" ";
            }cout<<endl;
        }

};
int main()
{
        /* code here */
        Heap h1;
        h1.insert(50);
        h1.insert(55);
        h1.insert(53);
        h1.insert(52);
        h1.insert(54);
        h1.print();


    return 0;
}