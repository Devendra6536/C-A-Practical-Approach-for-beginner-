#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
string ReverseWord(string s){
    int n = s.length();
    int ss = "";
    int ans = "";

    for(int i=0;i<n;i++){
        // phle to hum check karenge or white space remove kareng
        while(s[i]==' ' && ss=="") i++;
        if(s[i]!=' ' && i<=n) ss +=s[i];
        else if(s[i]==' ' && i<=n){
            if(ans!="") ans = ss + " " + ans;
            else ans = ss;
        }
    }

    if(ss!="")
    {
        if(ans!="") ans = ss + " " + ans;
            else ans = ss;
    }
    return ans;
}
int main()
{
        /* code here */
        string s = "the sky is blue";
       string ss = ReverseWord(s);
    cout<<ss;
    return 0;
}