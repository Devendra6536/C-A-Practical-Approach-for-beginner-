#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
void combination(int index,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>ds){
        
        if(index == arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        
        if(arr[index]<=target){
            ds.push_back(arr[index]);
            combination(index,target-arr[index],arr,ans,ds);
            ds.pop_back();
        }
        combination(index+1,target,arr,ans,ds);
    }
int main()
{
        /* code here */
        vector<int>candidates{1,1,1,2,2};
        vector<vector<int>>ans;
        vector<int>ds;
int target;
cin>>target;
combination(0,target,candidates,ans,ds);
for(int i=0;i<ans.size()-1;i++){
    cout<<ans[i]<<" ";
}
    return 0;
}