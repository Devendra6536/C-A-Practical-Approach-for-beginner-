#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<char> findUnique(string s){
    unordered_map<char,int>mp;

vector<char>v;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    for(auto &it:mp){
        if(it.second > 1)
            v.push_back(it.first);
    }
    return v;
}
int main()
{
        /* code here */
    vector<char> ans = findUnique("abcabc");
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}