#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<string> s={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void combi(string digits,string output, vector<string>&ans,int index,vector<string>s){
        
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        
        
        int num = digits[index]-'2';
        for(int i=0;i<s[num].size();i++){
            output.push_back(s[num][i]);
            combi(digits,output,ans,index+1,s);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0) return ans;
        int index=0;
        string output;
        combi(digits,output,ans,index,s);
        return ans;
    }
int main()
{
        /* code here */
        vector<string>ans ;
        ans = letterCombinations("3");
        cout<<"{";
        for(int i=0;i<ans.size();i++){
            cout<<"'"<<ans[i]<<"' ";
        }
        cout<<"}";

    return 0;
}