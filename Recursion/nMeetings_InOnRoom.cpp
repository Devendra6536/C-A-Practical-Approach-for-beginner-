#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++){
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        
        int count = 0;
        int meet= -1;
        for(int i=0;i<n;i++){
            if(meet<v[i].second)
            {
                meet = v[i].first;
                count++;
            }
        }
        return count;
    }
int main()
{
        /* code here */
int start[] = {1,3,0,5,8,5};
int end[]  = {2,4,6,7,9,9};
int n = sizeof(start)/sizeof(start[0]);
cout<<"There are "<<maxMeetings(start,end,n)<<" Meeting in One Room";
    return 0;
}