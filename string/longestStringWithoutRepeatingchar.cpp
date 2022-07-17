#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int longestString( string s){
    int left =0,right = 0;
    int n = s.size();
    vector<int>mpp(256,-1);
    int len = 0;

    while(left < n){
        if(mpp[s[right]]!=-1) left = max(mpp[s[right]]+1, left);
        mpp[s[right]] = right;
        len = max(len,right-left+1);
        right++;
    }
    return len;
}
int main()
{
        /* code here */
        string s = "abcabcbb";
        cout<<longestString(s);

    return 0;
}