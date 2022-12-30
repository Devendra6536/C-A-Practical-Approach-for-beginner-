#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// first we insert the new interwal and sort the intervals 
// Now merge the interval
// T. C. -> O(N+NlogN);
vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>>ans;

        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());

        vector<int>temp = intervals[0];
        for(auto it : intervals){
            if(temp[1] >= it[0]){
                temp[1] = max(temp[1],it[1]);
            }
            else{
                ans.push_back(temp);
                temp = it;
            }
        }
        ans.push_back(temp);
        return ans;
    }
int main()
{
        /* code here */

    return 0;
}