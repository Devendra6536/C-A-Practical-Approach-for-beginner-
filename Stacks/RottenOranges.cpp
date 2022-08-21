#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int orangesRotting(vector<vector<int>>& grid) {
       queue<pair<int, int>>q;
        int n = grid.size(), m = grid[0].size(), fresh = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2)
                    q.push({i, j});
                if(grid[i][j] == 1) 
                    fresh++;
            }
        }
        
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        
        int time=0;
        while(!q.empty())
        {
            int sz = q.size();
            while(sz--){
                int r = q.front().first;
                int c = q.front().second;
                q.pop();

                for(int i=0;i<4;i++){
                    int nrow = r + dx[i];
                    int ncol = c + dy[i];

                    if(nrow >=0 && nrow < n && ncol >=0 && ncol < m && grid[nrow][ncol]==1)
                    {
                        grid[nrow][ncol]=2;
                        q.push({nrow,ncol});
                        fresh--;
                    }
                }
            }
            time++; 
        }
        
        if(fresh > 0) return -1;
        else return time-1;
    }
int main()
{
        /* code here */
vector<vector<int>>grid={{2,1,1},{1,1,0},{0,1,1}};
cout<<orangesRotting(grid);
    return 0;
}