#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int longestConsecutive(vector<int>& nums) {
        set<int>st;
        for(auto it:nums){
            st.insert(it);
        }
        
        int streak=0,currStreak,currNum;
        for(auto num:nums){
            if(!st.count(num-1)){
                currStreak=1;
                currNum = num;
                while(st.count(currNum+1)){
                    currStreak+=1;
                    currNum+=1;
                }
                streak = max(currStreak,streak);
            }
        }
        return streak;
    }
int main()
{
        /* code here */
        vector<int>nums{100,4,101,3,2,1};
        cout<<"length of longest consecutive : "<<longestConsecutive(nums);

    return 0;
}