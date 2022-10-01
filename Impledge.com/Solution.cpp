#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
        
        string myText;
        int i=0;
        fstream myfile("ex.txt");
        
        

        while(getline(myfile,myText)){
            
            cout<<myText<<endl;
            i++;
        }

        cout<<i<<endl;
        myfile.close();
    vector<string>v;
    v.push_back("12");
    v.push_back("123");
    v.push_back("123");

        string s = "12";
        for(int i=0;i<2;i++){
            cout<<s[i]-'0'<<endl;
        }
            string st="-2";
            cout<<st[];

    return 0;
}