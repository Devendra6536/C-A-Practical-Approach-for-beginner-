#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool wordPattern(string pattern, string s) {
        map<char,string>mp;
        map<string,char>mp1;     
        
        vector<string>vec;
        string word = "";
        for(int i=0;i<s.length();i++){
            if(s[i] == ' '){
                vec.push_back(word);
                word = "";
            }
            else{
                word.push_back(s[i]);
            }
        }
        vec.push_back(word);
        
        if(pattern.size() != vec.size()) return false;
        for(int i=0;i<pattern.length();i++){
            if(mp.find(pattern[i]) == mp.end()  && mp1.find(vec[i])==mp1.end())
            {
                mp[pattern[i]] = vec[i];
                mp1[vec[i]] = pattern[i];
            }
            if(mp[pattern[i]] != vec[i] || mp1[vec[i]] != pattern[i]) return false;
        }
     return true;
    }
int main()
{
        /* code here */

    return 0;
}