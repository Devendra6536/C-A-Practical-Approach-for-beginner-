#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
struct Item
{
    /* data */
    int value;
    int weight;
};

bool static comp(Item a, Item b){
        double a1 = (double)a.value/(double)a.weight;
        double b1 = (double)b.value/(double)b.weight;
        return a1 > b1;
        
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        
        sort(arr,arr+n,comp);
        
        int currWeight = 0,reqWeight;
        double value  = 0.0;
        for(int i=0;i<n;i++){
            if(currWeight + arr[i].weight <= W){
                currWeight += arr[i].weight;
                value += arr[i].value;
            }
            else{
                reqWeight = W - currWeight;
                value += arr[i].value/(double)arr[i].weight*reqWeight;
                break;
            }
        }
        return value;
    }
       
int main()
{
        /* code here */
        int n = 3;
        int W = 50;
        Item arr[n] = {{60,10},{100,10},{120,30}};
    double totalNoitem  = fractionalKnapsack(W,arr,n);
    cout<<"Total No of Item "<<totalNoitem;
    return 0;
}