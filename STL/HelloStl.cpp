#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
        /* code here */
        vector<int>raj;
        raj.emplace_back(1);
        raj.emplace_back(10);
        raj.emplace_back(100);
        raj.emplace_back(1000);
        raj.emplace_back(10000);

        for(auto i : raj){
            cout<<i<<endl;
        }

        vector<vector<int>>vec;
        vector<int>v1;
        v1.push_back(1);
        v1.push_back(2);

        vector<int>v2;
        v2.push_back(3);
        v2.push_back(4);

        vector<int>v3;
        v3.push_back(5);
        v3.push_back(6);
        v3.push_back(7);

        vec.push_back(v1);
        vec.push_back(v2);
        vec.push_back(v3);

        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[i].size();j++){
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }


        for(auto vectr:vec){
            for(auto it:vectr){
                cout<<it<<" ";
            }
            cout<<endl;
        }

    return 0;
}
