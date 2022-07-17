#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<vector<string>> groupAnagram(vector<string> & str){
    vector<vector<string>>vec;
    map<string,vector<string>>mp;
    for(int i=0;i<str.size();i++){
        string s = str[i];
        sort(s.begin(),s.end());
        mp[s].push_back(str[i]);
    }

    for(auto &i:mp){
        vec.push_back(i.second);
    }
    return vec;
}
int main()
{
        /* code here */
        vector<string> str{"eat","ate","tea","bat","nat","tan"};
vector<vector<string>> ans;
    ans = groupAnagram(str);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans.size();j++){
        cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}