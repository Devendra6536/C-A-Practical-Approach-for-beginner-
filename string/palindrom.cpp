#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool isPalindrome(string s) {
        int n = s.length();
        string ss="";
        for(int i=0;i<n;i++){
            if(s[i] >='A' && s[i] <='Z'){
                ss.push_back(s[i]-'0'+80);
            }
            else if(s[i] >= 'a' && s[i] <= 'z') ss.push_back(s[i]);
        }


        int m = ss.size();
        int i=0;
        while(i<m){
            if(ss[i++] != ss[m--]) return false;
        }
        return true;
}
bool validPalindrome(string s) {
        
        int n = s.length();
        string ss="";
        for(int i=0;i<n;i++){
            ss = "";
            for(int j=0;j<n;j++){
                if(i!=j) ss.push_back(s[j]);
            }
            
            int k = 0;
            int m = ss.length();
            while(k<m){
                if(ss[k++] != ss[m--]) return false;
            }
        }
     return true;
}
void capitalToSmallLetter(string s){
    for(int i=0;i<s.size();i++){
            char c=s[i]-'0'+80;
            cout<<c <<" ";
        }}
int main()
{
        /* code here */
        char c=65;
        cout<<c<<endl;
        string s="ABCDE";
        capitalToSmallLetter(s);        
        cout<<endl;
        isPalindrome(s) ? cout<<"Yes" : cout<<"No";
        cout<<endl;
         s = "aba";
        validPalindrome(s)? cout<<"Yes" : cout<<"No";

        

    return 0;
}