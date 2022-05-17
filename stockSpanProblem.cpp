#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
vector<int> checkprice(vector<int>v){
    vector<int>ans;
    stack<pair<int,int>>s;
    for(auto price : v){
        int days = 1;
        while (!s.empty() and s.top().first <= price){
            days+=s.top().second;
            s.pop();
        }

        ans.push_back(days);
        s.push(make_pair(price,days));
        
    }
    return ans;
}
int main()
{
        /* code here */
    vector<int>v{100,80,60,70,60,75,85};
    vector<int>ans;
    ans = checkprice(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}