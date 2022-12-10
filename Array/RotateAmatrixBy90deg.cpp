#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>& mat){
    int n = mat.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
}
int main()
{
        /* code here */
        vector<vector<int>>mat = {
            {1,2,3,},
            {5,6,7,},
            {9,10,11,}
        };
        int n = mat.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<mat[i].size();j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"After 90 deg rotation of the array is "<<endl;
        rotate(mat);
        for(int i=0;i<n;i++){
            for(int j=0;j<mat[i].size();j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }

    return 0;
}