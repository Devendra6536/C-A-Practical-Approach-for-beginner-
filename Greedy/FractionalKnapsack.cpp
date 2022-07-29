#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
static bool comp(Item a, Item b){
        double r1 = (double) a.value/(double)a.weight;
        double r2 = (double) b.value/(double)b.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,comp);
        
        int cw=0;
        double v = 0.0;
        for(int i=0; i<n;i++){
            if(cw + arr[i].weight <= W){
                v+=arr[i].value;
                cw+=arr[i].weight;
            }
            else{
                v+=(W-arr[i].weight)*(arr[i].value/arr[i].weight);
                cw +=(W-arr[i].weight);
                break;
            }
        }
        return v;
    }
        
int main()
{
        /* code here */

    return 0;
}