#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>vec;
        int left = 0,top=0;
        int right = matrix[0].size()-1;
        int bottom = matrix.size()-1;
        int d=0;
        while(left<=right && top<=bottom){
            
            if(d==0){
            for(int i=left;i<=right;i++) vec.push_back(matrix[top][i]);
            top++;
            d=1;
            }
            else if(d==1){
            for(int i=top;i<=bottom;i++) vec.push_back(matrix[i][right]);
            right--;
            d=2;
            }
            else if(d==2){
            for(int i=right;i>=left;i--) vec.push_back(matrix[bottom][i]);
            bottom--;
            d=3;
            }
            else if(d==3){
            for(int i=bottom;i>=top;i--) vec.push_back(matrix[i][left]);
            left++;
            d=0;
            }
        }

        return vec;
        
    }
int main()
{
        /* code here */

    return 0;
}