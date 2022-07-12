#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
                
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        vector<int>ans;
        
        for(int i=0;i<nums1.size();i++){
            
            int low = 0;
            int high = nums2.size()-1;
            int mid=0;
            while(low<=high){
                mid = low +(high - low )/2;
                
                if(nums2[mid]==nums1[i])
                {
                    if(find(ans.begin(),ans.end(), nums2[mid] ) !=ans.end()){
                        break;
                    }
                    ans.push_back(nums2[mid]);
                    break;
                }
                else if(nums2[mid] < nums1[i])
                {
                    low = mid + 1 ;
                }
                else {
                    high = mid -1;
                }
            }
            
        }
        return ans;
    }
int main()
{
        /* code here */
vector<int>nums1{4,9,5};
vector<int>nums2{9,4,9,8,4};
vector<int>ans;

ans = intersection(nums1,nums2);
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
    return 0;
}