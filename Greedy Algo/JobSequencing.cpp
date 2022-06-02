#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

struct Job{
    int i;
    int dead;
    int profit;
};
bool static comparison(Job a,Job b){
        return (a.profit > b.profit);
    }
    void JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comparison);
        int maxi=arr[0].dead;
        for(int i=0;i<n;i++){
            maxi = max(maxi,arr[i].dead);
        }
        
        int slot[maxi+1];
        for(int i=0;i<=maxi; i++){
            slot[i] = -1;
        }
        
        int jobCount = 0, profit=0;
        
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(slot[j] == -1){
                    slot[j] = i;
                    jobCount++;
                    profit+=arr[i].profit;
                    break;
                }
            }
        }
        cout<<jobCount<<" "<<profit;
    } 
int main()
{
        /* code here */

        Job arr[]  = {(1,4,20),(2,1,10),(3,1,40),(4,1,30)};
        JobScheduling(arr,4);

    return 0;
}