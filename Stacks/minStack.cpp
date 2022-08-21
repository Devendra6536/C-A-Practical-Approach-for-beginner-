#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class MinStack {
public:
    stack<long long>st;
    long long mini;
    MinStack() {
     while(!st.empty()) st.pop();
        mini = INT_MAX;
    }
    
    void push(int val) {
        long long value = val;
        if(st.empty()){
            mini = value;
            st.push(value);
        }
        else
        {
            if(value < mini ){
                st.push(2*value-mini);
                mini = value;
            }
            else  st.push(value);
        }
        
    }
    
    void pop() {
        if(st.empty()) return;
        long long el = st.top();
        st.pop();
        
        if(el < mini) mini = 2*mini-el;
    }
    
    int top() {
        if(st.empty()) return -1;
        
        if(st.top() < mini ) return mini;
        else return st.top();
    }
    
    int getMin() {
        return mini;
    }
};

int main()
{
        /* code here */

    return 0;
}