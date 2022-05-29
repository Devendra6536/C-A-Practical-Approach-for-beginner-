#include<bits/stdc++.h>
using namespace std;



bool isSafe(int node , int color[] ,bool graph[101][101],int n, int c)
{
    for(int i = 0 ;i<n;i++)
    {
        if(i!=node && graph[node][i] == 1 && color[i] == c)
        {
            return false;
        }
    }
    return true;
}
bool coloring(int node,int color[],int m,int n, bool graph[101][101]){
    
    if(node == n) 
    {
        return true;
    }
    
    for(int c = 1; c<=m; c++){
        if(isSafe(node,color,graph,n,c))
        {
            color[node] = c;
            if(coloring(node+1,color,m,n,graph)) return true;
            color[node] =0;
        }
    }
    return false;
}
int main() {
  int N = 4;
  int m = 3;

  bool graph[101][101] = {
    (0, 1),
    (1, 2),
    (2, 3),
    (3, 0),
    (0, 2)
    };
    int color[N] = {0};
    cout << coloring(0,color,m,N,graph);
}