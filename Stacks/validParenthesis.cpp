#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool isValid(string s) {
        stack<char>st;
        bool valid = true;
        for(int i=0 ; i< s.length(); i++){
            
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'  ) st.push(s[i]);
            else if(s[i] == ')'){
                if(!st.empty() && st.top() == '(') st.pop();
                else{
                    valid = false;
                    break;
                } 
            }
            else if(s[i] == ']'){
                if(!st.empty() && st.top() == '[') st.pop();
                else{
                    valid = false;
                    break;
                } 
            }
            else if(s[i] == '}'){
                if(!st.empty() && st.top() == '{') st.pop();
                else{
                    valid = false;
                    break;
                } 
            }
        }
        if(!st.empty()) return false;
        else return valid;
    }
int main()
{
        /* code here */
        string s = "(){}[]";
        if(isValid(s)) cout<<"The given string of parenthesis is valid"<<endl;
        else cout<<"The given string of parenthesis is not valid"<<endl;

    return 0;
}