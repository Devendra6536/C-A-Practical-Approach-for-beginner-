#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
string countAndSay(int n) {
        
        if(n==1) return "1";
        if(n==2) return "11";
        
        string s = "11";
        int i=3;
        while(i<=n){
            string ss="";
            s+='&';
            int cnt=1;
            for(int j=1;j<s.length();j++)
            {
                if(s[j]==s[j-1])
                {
                    cnt++;
                }
                else{
                    ss+=to_string(cnt);
                    ss+=s[j-1];
                    cnt=1;                    
                }              
            }
            s = ss; 
            i++;
        }    
        return s;
}
int main()
{
        /* code here */
        int n = 3;
        cout<<"The string is " << countAndSay(n);

    return 0;
}