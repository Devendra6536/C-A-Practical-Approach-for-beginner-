#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
 bool static comparison(Job a,Job b){
        return (a.profit > b.profit);
    }
vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr, arr+n, comparison);
        vector<int>ans;
        int cnt=0,p=0;
        int maxx = arr[0].profit;
        for(int i=0;i<n;i++){
            maxx = max(maxx,arr[i].dead);
        }
        vector<int>vec(maxx,-1);
        
        for(int i=0;i<n;i++){
            for(int j = arr[i].dead ; j>0 ; j--){
                    if(vec[j]==-1)
                    {
                        vec[j] = i;
                        p+=arr[i].profit;
                        cnt++;
                        break;
                    }
            }
        }
        ans.push_back(cnt);
        ans.push_back(p);
        return ans;
    } 
int main()
{
        /* code here */

    return 0;
}