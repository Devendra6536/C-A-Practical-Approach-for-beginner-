#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
        /* code here */
        /*pair<int,int>a,b;

        a = make_pair(1,3);
        b = make_pair(3,9);

        cout<<a.first<<" "<<a.second<<endl;
        cout<<b.first<<" "<<b.second<<endl;

cout<<endl;
swap(a,b);
cout<<a.first<<" "<<a.second<<endl;
        cout<<b.first<<" "<<b.second<<endl;

        map<int,int>mp;
        
        cout<<mp.size()<<" "<<mp.max_size()<<endl;
        for(int i=0;i<10;i++){
            mp[i] = i;
        }
        for(auto it:mp){
            cout<<it.first<<"\t"<<it.second<<endl;
        }
cout<<endl;
        auto it1  = mp.find(6);
        auto it2  = mp.find(9);
        // mp.erase(mp.begin(),mp.end());
        for(auto it:mp){
            cout<<it.first<<"\t"<<it.second<<endl;
        }
        mp.insert(make_pair(10,10));
        // mp.clear();
        cout<<mp.size()<<endl;
        for(auto it:mp){
            cout<<it.first<<"\t"<<it.second<<endl;
        }

        cout<<mp.lower_bound(6)->first<<" "<<mp.lower_bound(6)->second;




        multimap<int,int,greater<int>>mp;
        for(int i=1;i<5;i++){
            mp.insert({i,i+10});
        }
        for(int i=1;i<5;i++){
            mp.insert({i,i+20});
        }
        mp.insert({4,60});
        mp.insert({4,70});
        mp.insert({4,80});
        mp.insert({4,90});
        mp.insert({3,90});
        mp.insert({2,90});
        mp.insert({2,90});
        mp.insert({2,90});
        mp.insert({2,90});
        
        for(auto it:mp){
            cout<<it.first<<"\t "<<it.second<<endl;
        }
        // cout<<endl<<endl<<mp.count(2)<<endl<<endl;
        // cout<<mp.find(2)->first<<"\t"<<mp.find(2)->second<<endl;
        // while(mp.count(2)>3) mp.erase(mp.find(2));
        cout<<endl;
        mp.erase(mp.find(2),mp.find(5));
        for(auto it:mp){
            cout<<it.first<<"\t "<<it.second<<endl;
        }*/



        set<int,greater<int>>st;
        st.insert(112);
        st.insert(113);
        cout<<st.size()<<"\t"<<st.max_size()<<endl;
        for(auto it =st.begin();it!=st.end();it++){
            cout<<*it<<" ";
        }

        cout<<endl;
        set<int>st1(st.begin(),st.end());
        for(auto it:st1){
            cout<<it<<" ";
        }
        vector<int>v;
        v.push_back(5);
        v.push_back(5);
        v.push_back(6);
        v.push_back(7);
        v.push_back(8);
        v.push_back(9);
        vector<int>vec(v.begin()+2,v.end());
        cout<<endl;
        for(auto it:vec){
            cout<<it<<" ";
        }
        st.insert(65);
        st.insert(71);
        st.insert(78);
        if(st.find(65) != st.end()){
            cout<<"element is present in the sset"<<endl;
        }
        st.erase(st.begin());
        st.erase(78);
        cout<<st.size()<<endl;
        for(auto it:st){
            cout<<it<<" ";
        }
       

cout<<endl<<endl;

    multiset<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    cout<<s.size()<<endl;
    s.emplace(2);
    s.emplace(20);
    s.emplace(200);
    cout<<s.size()<<endl;
    cout<<s.count(1)<<endl;
    s.erase(s.find(1),s.find(1)+2);
    cout<<s.count(1)<<endl;




       
    return 0;
}