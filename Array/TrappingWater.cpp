#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int trap(vector<int>& height) {
        
        int n = height.size();
        vector<int>left(n);
        vector<int>right(n);
        
        left[0] = height[0];
        
        for(int i=1; i<n;i++){
            left[i] = max(left[i-1],height[i]);
        }
        right[n-1] = height[n-1];
        for(int i=n-2;i>=0;i--){
            right[i] = max(right[i+1],height[i]);
        }
        
        int ans  = 0;        
        for(int i=0;i<n;i++){
            ans+=min(left[i],right[i])-height[i];
        }
        
        return ans;
        
    }
int trapWithOptiMal(vector<int>& height) {
        
        int n = height.size();
        
        int l = 0;
        int r = n-1;
        int leftMax = 0,rightMax = 0;
        int  water = 0;
        while(l <= r){
            
            if(height[l] <= height[r]){
                if(height[l] >= leftMax) leftMax = height[l];
                else water += leftMax - height[l];
                l++;
            }
            else
            {
                if(height[r] >= rightMax) rightMax = height[r];
                else water += rightMax - height[r];
                r--;                
            }
        }
        return water;
    }
int main()
{
        /* code here */
        // output -> 6
    vector<int>height{0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height)<<endl;
    cout<<trapWithOptiMal(height);

    return 0;
}