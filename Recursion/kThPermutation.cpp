#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printPermutation(vector<vector<int>>&ans,int n){
    cout<<"The Kth Permutation is"<<endl;
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
           
                if(i == n-1) cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
void printAllPermutation(vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds,int freq[]){
  
  if(ds.size() == arr.size()){
      ans.push_back(ds);
      return;
  }

  for(int i=0;i<arr.size();i++){
      if(!freq[i]){
          ds.push_back(arr[i]);
          freq[i] = 1;
          printAllPermutation(arr,ans,ds,freq);
          freq[i] = 0;
          ds.pop_back();
      }
  }

}

void permutationWithoutSpace(int index,vector<int>&arr,vector<vector<int>>&ans){
    if(index >= arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i=index; i<arr.size();i++){
        swap(arr[index],arr[i]);
        permutationWithoutSpace(index+1,arr,ans);
        swap(arr[index],arr[i]);
    }
}
int main()
{
        /* code here */

    vector<int>arr{1,2,3};
    vector<vector<int>>ans;
    vector<int>ds;
    int freq[arr.size()] = {0};
    printAllPermutation(arr,ans,ds,freq);
    printPermutation(ans,2);
    vector<vector<int>>anss;
    permutationWithoutSpace(0,arr,anss);
    cout<<"Without any extra Space Complexity";
    int n=1;
    printPermutation(anss,3);

    return 0;
}