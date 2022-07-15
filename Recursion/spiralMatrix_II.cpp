#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>>v(n,vector<int>(n,1));
        int top = 0, left = 0, bottom = n-1, right = n-1;
        int index = 1;
        
        while(left <= right && top <= bottom)
        {
            for(int i = left; i <= right ; i++){
                v[top][i] = index++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                v[i][right] = index++;
            }
            right--;
            for(int i=right; i>=left; i--){
                v[bottom][i] = index++;
            }
            bottom--;
            for(int i=bottom; i>= top ;i--){
                v[i][left] = index++;
            }
            left++;
        }        
        return v;
    }
int main()
{
        /* code here */

        int n;
        cout<<"Enter a number ";
        cin>>n;

        vector<vector<int>>Result;
        Result = generateMatrix(n);
        cout<<"{"<<endl;
       for(int i= 0; i<Result.size(); i++){
        for(int j= 0; j<Result[0].size(); j++)
        {
            cout<<Result[i][j]<<" ";
        }
            cout<<"\n";
    }
    cout<<"}"<<endl;

    return 0;
}