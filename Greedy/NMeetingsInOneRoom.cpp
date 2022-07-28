#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
 int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            vec.push_back({end[i],start[i]});
        }
        sort(vec.begin(),vec.end());
        
        int cnt = 1;
        int limit = vec[0].first;
        for(int j=1; j < vec.size(); j++){
            if(limit < vec[j].second){
                cnt++;
                limit = vec[j].first;
            }
        }
        return cnt;
    }
int main()
{
        /* code here */
        // OUTPUT->4
        int start[]  = {1,3,0,5,8,5};
        int end[]  =   {2,4,6,7,9,9};
        cout<<maxMeetings(start,end,6);

    return 0;
}