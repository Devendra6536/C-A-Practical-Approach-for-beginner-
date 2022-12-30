#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int gap(vector<int>vec,int n){
    int g=0;
    for(int i=1;i<n;i++){
        g = max(g,abs(vec[i]-vec[i-1]));
    }
    return g;
}
bool checkGold(int n){
    int maxi=0;
    int sum=0;
    while(n>0){
        int digit =n%10;
        if(maxi<digit){
            maxi = digit;
        }
        sum+=digit;
        n/=10;
    }
    if(sum-maxi == maxi) return true;
    return false;
}

int gold(int x,int y){
    int sum = 0;
    for(int i=x;i<=y;i++){
        if(checkGold(i)){
            sum+=i;
        }
    }
    return sum;
}
int main()
{
        /* code here */
        vector<int>vec;
        int n;
        cout<<"Enter Your Number "<<endl;

        cin>>n;
        while(n--){
            int val;
            cin>>Val;
            vec.push_back(val);
        }
        cout<<"the gap is "<<gap(vec,5);
        cout<<endl;
        cout<<endl;
        cout<<endl;

        cout<<"the golden price is "<< gold(10,100);

    return 0;
}