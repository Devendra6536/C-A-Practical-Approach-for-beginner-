#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// O(N) solution
int firstIndex(string haystack, string needle){
        int n = needle.length();
        int m = haystack.length();
        int i=0;
        while(i<=m-n){
            if(haystack[i]==needle[0]){
                    if(haystack.substr(i,n)==needle) return i;
            }
            i++;
        }
    return -1;
}
// O(N^2) solution
 int strStr(string haystack, string needle) {
     
        int n = needle.length();
        int m = haystack.length();
        int i=0;
        while(i<=m-n){
            if(haystack.substr(i,n)==needle){                 
                return i;
            }
            i++;
        }
    return -1;
    }
int main()
{
        /* code here */
        string haystack = "mississippi";
        string needle = "issip";
        cout<<"The firat index of the string is "<<firstIndex(haystack,needle);
        
    return 0;
}