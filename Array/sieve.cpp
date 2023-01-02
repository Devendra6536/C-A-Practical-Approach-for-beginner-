#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// Time Complexity => O(T*sqrt(N));
void findPrime(int n){
    int prime[100] = {0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j] = 1;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i]==0) cout<<i<<" ";
    }
}

// Time Complexity => O(T*sqrt(N));
int N = 30;
bool arr[1000001];
void Seive(){
    for(int i=2;i<=N;i++){
        arr[i] = true;
    }

    for(int i=2;i*i<=N;i++){
        for(int j=i*i;j<=N;j+=i){
            if(arr[i] == true){
                arr[j] = false;
            }
        }
    }

    for(int i=2;i<=N;i++){
        if(arr[i]) cout<<i<<" ";
    }
}
int main()
{
        /* code here */
        int n;
        cin>>n;
        findPrime(n);
        cout<<endl;
        Seive();
    return 0;
}