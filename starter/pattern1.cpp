#include<iostream>
using namespace std;
int main(){
   int n; 
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                cout<<" ";
            }
            cout<<" *";
        }
        cout<<endl;
    }


cout<<endl;
cout<<endl;
 n = 5;
    for(int i=0;i<n*2-1;i++)
    {
        for(int j=0;j<n*2;j++)
        {
             if(i==j){
                cout<<"*";
            }
            else if(j==n*2-2-i){
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

cout<<endl;
cout<<endl;
n = 5;
    for(int i=0;i<n*2-1;i++)
    {
        for(int j=0;j<n*2;j++)
        {
             if(i<=n/2+1 && j<=n/2+1 && i==j){
                cout<<"*";
            }
            else if(j==n*2-2-i){
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

cout<<endl;
cout<<endl;
 n = 8;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==n-1-i){
                cout<<" *";
            }
            else 
            {
             if((i==0 && j<n-1) || (i==n-1 && j>0))
            {
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
            }
        }
        cout<<endl;
    }

        cout<<endl;
        cout<<endl;
 n=4;
int index = 1;
int right=n*n+1;

    for(int i=n;i>0;i--){

        for(int l=n; l>i; l--){
            cout<<"  ";
        }

        for(int j=1;j<=i;j++){
            cout<<index++;
            cout<<" ";
        }
        for(int k = 1;k<=i;k++)
        {
            cout<<right++;
            if(k<i) 
                cout<<" ";
        }
        right = right-(i-1)*2-1;
        cout<<endl;
    }
    
    return 0;
}