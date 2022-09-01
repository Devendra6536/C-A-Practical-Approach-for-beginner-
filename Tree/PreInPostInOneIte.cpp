#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<vector<int>> traveral(Node* root){
    stack<pair<Node*,int>st;
    st.push({root,1});
    vector<int>pre;
    vector<int>in;
    vector<int>post;
    while(!st.empty())
    {
        auto it = st.top();
        st.pop();

        Node* temp = it.first;
        int num = it.second;

        if(num == 1){
            pre.push_back(temp->data);
            num++;
            st.push({temp,num});
            if(temp->left) st.push({temp->left,1});
        }
        else if(num == 2){
            in.push_back(temp->data);
            num++;
            st.push({temp,num});
            if(temp->right) st.push({temp->right,1});
        }
        else(num == 3){
            post.push_back(temp->data);
        }
        
    }
    v.push_back(pre);
    v.push_back(in);
    v.push_back(post);
    

}
int main()
{
        /* code here */

    return 0;
}