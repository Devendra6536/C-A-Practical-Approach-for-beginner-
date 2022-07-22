#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void printArray(vector<vector<int>>& arr){
        int n = arr.size();
        int m = arr[0].size();

        for(int i=0;i<n;i++){
            cout<<"[";
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
            if(j<=m-2) cout<<",";
        }
        cout<<"]"<<" ";
        }

}
vector< vector<int>> mergeIntervals( vector< vector<int>>& intervals)
{
    vector< vector<int>> merge;
    sort(intervals.begin(),intervals.end());

    vector<int> temp = intervals[0];
    for(auto it:intervals){
        if(it[0] <= temp[1])
        {
            temp[1] = max(it[1],temp[1]);
        }
        else{
            merge.push_back(temp);
            temp = it;
        }
    }
    merge.push_back(temp);
    return merge;

}
int main()
{
        /* code here */
        vector< vector<int>> nums{{1,3},{8,10},{15,18},{2,6}};
        vector< vector<int>> ans = mergeIntervals(nums);
        printArray(ans);

    return 0;
}