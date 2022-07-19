#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void printArray(vector<vector<int>>& arr){
        int n = arr.size();
        int m = arr[0].size();

        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }

}
vector<vector<int>> setZero(vector<vector<int>>& arr){

    int n = arr.size();
    int m = arr[0].size();

    vector<int>arr1(n,-1);
    vector<int>arr2(m,-1);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                arr1[i]=0;
                arr2[j]=0;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            if(arr1[i]==0 || arr2[j]==0){
                arr[i][j]=0;
            }
        }
    }
    return arr;
}


vector<vector<int>> setZeroOptimal(vector<vector<int>>& arr){

    int n = arr.size();
    int m = arr[0].size();

 for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                arr[0][j]=0;
                arr[i][0]=0;
            }
        }
 }

  for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[0][j]==0 || arr[i][0]==0){
                arr[i][j] = 0;
            }
        }
  }
  return arr;
    

}
int main()
{
        /* code here */
        vector<vector<int>>arr{{1,2,3},{1,0,1},{4,5,6}};
        vector<vector<int>>ans;
        
        printArray(arr);
        cout<<endl;
        ans = setZero(arr);
        printArray(ans);

        

        cout<<endl;
        cout<<endl;
        vector<vector<int>>brr{{1,2,3},{1,0,1},{4,5,6}};
        ans = setZeroOptimal(brr);
        printArray(ans);

    return 0;
}