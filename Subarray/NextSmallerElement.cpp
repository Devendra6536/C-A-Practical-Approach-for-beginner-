#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
void nextSmallerElement(vector<int>&V){
    int n = V.size();
    stack<int>St;
    St.push(-1);
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        while (St.top()>=V[i]){
            St.pop();
        }
        ans.push_back(St.top());
        St.push(V[i]);

    }
    for(int i=0;i<V.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main()
{
        /* code here */
vector<int>V{2,1,4,3};

nextSmallerElement(V);
    return 0;
}