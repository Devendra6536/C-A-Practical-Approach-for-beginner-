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
        int flag;
        for(int i=0;i<n;i++){
            flag=0;
            for(int j=0;j<n;j++){
                if(i!=j) {
                     int k = 0;
             int m = s.length()-1;
            while(k<m ){
                if(k==i || m==i) continue;
                if(s[k++] != s[m--]){
                    flag=1;
                }
            }
            if(flag==0) return true;
            }
            }
            
           
        }
     return false;
}
void capitalToSmallLetter(string s){
    for(int i=0;i<s.size();i++){
            char c=s[i]-'0'+80;
            cout<<c <<" ";
        }}
int main()
{
        /* code here */
        string s="ABCDE";
        capitalToSmallLetter(s);        
        cout<<endl;
        isPalindrome(s) ? cout<<"Yes" : cout<<"No";
        cout<<endl;
         s = "abc";
        validPalindrome(s)? cout<<"Yes" : cout<<"No";

        

    return 0;
}