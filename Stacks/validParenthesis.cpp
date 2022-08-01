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


// Easy and simple solutions
bool isValid(string s) {
        stack<char> st;  //taking stack for keep tracking the order of the brackets..
        for(auto i:s)  //iterate over each and every elements
        {
            if(i=='(' or i=='{' or i=='[') st.push(i);  //if current element of the string will be opening bracket then we will just simply push it into the stack
            else  //if control comes to else part, it means that current element is a closing bracket, so check two conditions  current element matches with top of the stack and the stack must not be empty...
            {
                if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='{' and i!='}') or (st.top()=='[' and i!=']')) return false;
                st.pop();  //if control reaches to that line, it means we have got the right pair of brackets, so just pop it.
            }
        }
        return st.empty();  //at last, it may possible that we left something into the stack unpair so return checking stack is empty or not..
    }
int main()
{
        /* code here */
        string s = "(){}[]";
        if(isValid(s)) cout<<"The given string of parenthesis is valid"<<endl;
        else cout<<"The given string of parenthesis is not valid"<<endl;

    return 0;
}