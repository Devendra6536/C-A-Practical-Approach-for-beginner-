#include<iostream>
#include<bits/stdc++.h>
#include<vector>
 
using namespace std;
 vector<int> topKFrequent(vector<int>& nums, int k) {
        
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>> > minHeap;
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto i = mp.begin(); i!=mp.end(); i++)
        {
            minHeap.push({i->second, i->first});
            if(minHeap.size() > k)
            {
                minHeap.pop();
            }
        }
        
        vector<int>ans;
        while(minHeap.size()>0){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
        
    }
int main()
{
        /* code here */
    vector<int>nums{1,1,1,2,2,3};
    int top = 2;
    vector<int>ans;
    ans = topKFrequent(nums,top);
    for(auto i = ans.begin(); i!=ans.end(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}