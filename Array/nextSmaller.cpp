#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void nextSmaller(vector<int>&nums2,int n){
        stack<int>st;
        vector<int>v(n,-1);
        for(int i=nums2.size()-1; i >= 0 ; i--){            
            while(!st.empty() && st.top() >= nums2[i]) st.pop();            
            if(!st.empty()) v[i] = st.top();
            else v[i]= -1;            
            st.push(nums2[i]);
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
}
void PrevSmaller(vector<int>&nums2,int n){
        stack<int>st;
        vector<int>v(n,-1);
        for(int i=0; i <n ; i++){            
            while(!st.empty() && st.top() >= nums2[i]) st.pop();            
            if(!st.empty()) v[i] = st.top();
            else v[i]= -1;            
            st.push(nums2[i]);
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
int main()
{
        /* code here */
        vector<int>vec = {2,1,4,3};
        nextSmaller(vec,4);
        PrevSmaller(vec,4);


    return 0;
}