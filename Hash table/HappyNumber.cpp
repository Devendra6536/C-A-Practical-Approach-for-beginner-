#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int digitSum(int n){
        int sum = 0;
        while(n!=0){
                sum += pow(n%10,2);
                n /=10;
            }
           return sum;
    }
bool isHappy(int n) {
        unordered_map<int,int>mp;
        while(n!=1){
            int sum = 0;
            if(mp[n] == 0) mp[n]++;
            else return false;
           n = digitSum(n);
        }
        return true;
    }

bool isHappyFloyad(int n) {
        int s = digitSum(n);
        int f = digitSum(digitSum(n));
        
        while(s != f ){
            s = digitSum(s);
            f = digitSum(digitSum(f));
        }
        return f == 1;
    }
int main()
{
        /* code here */
        int n = 19;
        cout<< isHappy(n) << endl;
        cout<< isHappyFloyad(n) << endl;

    return 0;
}