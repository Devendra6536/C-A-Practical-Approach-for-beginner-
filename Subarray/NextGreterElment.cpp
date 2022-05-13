#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void NextGreaterElment(vector<int>&V){
    int n = V.size();

    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(V[j] > V[i]){
                cout<<V[j]<< " ";
                break;
            }
            if(j==n){
                cout<<-1;
            }
        }
        
    }
}
void nextGreaterElement(vector<int>&V){
    int n = V.size();
    stack<int>st;
    st.push(-1);
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() and st.top() <=V[i]){
            st.pop();
        }
        if(st.empty()){
            ans.push_back(-1);
        }
        else{
        ans.push_back(st.top());
        }
        st.push(V[i]);

    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main()
{
        /* code here */

    vector<int>V{9, 3, 7, 3};
    // NextGreaterElment(V);
    nextGreaterElement(V);
       return 0;
}