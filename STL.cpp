#include<iostream>
#include<bits/stdc++.h>
#include<array>
 
using namespace std;
 
struct node{
    /* data */
    int data;
    string name;
    

    node(int data_, string name_){
        data = data_;
        name = name_;

    }
};

int main()
{
        /* code here */

node n1 =  node(200,"dev");

 cout<<n1.data<<endl;

 array<int , 3> arr1 = {1,2,3};
 array<int ,5> arr2 = {1,2,3,0,0};
 array<int ,100> arr3 = {10};

 array<int ,10> arr4;
 arr4.fill(10);

 for(int i=0;i<arr4.size();i++){
 cout<<arr4.at(i)<<" ";

 }
 cout<<endl; 
 array<int, 5> arr5 = {1,2,3,4,5};
 for(auto it= arr5.begin(); it!=arr5.end();it++){
     cout<< *it <<" ";
 }
cout<<endl;
 for(auto it= arr5.rbegin(); it!=arr5.rend();it++){
     cout<< *it <<" ";
 }
 cout<<endl;
 for(auto it= arr5.end()-1; it>=arr5.begin();it--){
     cout<< *it <<" ";
 }
  
  cout<<endl;

  for(auto it: arr5){
      cout<< it<<" ";
  }
  cout<<endl;


  for(auto it: arr5){
      cout<<it<<" ";
  }
  cout<<endl;
  cout<<arr5.size();
   cout<<endl;
   cout<<arr5.max_size();
   cout<<endl;

   cout<< arr5.empty();
   for(auto it: arr5){
      cout<<it<<" ";
  }
   cout<<arr5.size();



   array<int ,5> brr;
   arr5.swap(brr);
cout<<endl;
   for(auto it: arr5){
      cout<<it<<" ";
  }
  cout<<endl;
   for(auto it: brr){
      cout<<it<<" ";
  }


cout<<endl;
//  vector in c++;
vector<int> arr;
cout<<arr.size()<<endl;
arr.push_back(0);
arr.push_back(2);
cout<<arr.size()<<endl;
arr.pop_back();
cout<<arr.size()<<endl;


arr.clear();
cout<<arr.size()<<endl;

vector<int> vec1(4,0);
vector<int> vec2(4,10);
vector<int> vec3(vec1.begin(),vec1.end());
vector<int>vec4(vec3);
cout<<endl;
cout<<vec1.size()<<endl;
cout<<vec2.size()<<endl;
cout<<vec3.size()<<endl;
cout<<vec4.size()<<endl;


vector<int> vec;
vec.push_back(25);
vec.push_back(50);
vec.push_back(75);
vec.push_back(100);
vec.push_back(125);
vector<int> vecc(vec.begin(),vec.begin()+3);
vecc.emplace_back(100);
for(int i=0;i<vecc.size();i++){
    cout<<vecc.at(i)<<" ";
}
swap(vec,vecc);
for(int i=0;i<vecc.size();i++){
    cout<<vecc.at(i)<<" ";
}





// 2d vector in c++


vector<vector<int> > vec12;

vector<int> dev;
dev.push_back(1);
dev.push_back(2);

vector<int> dev1;
dev1.push_back(10);
dev1.push_back(20);

vector<int> dev2;
dev2.push_back(100);
dev2.push_back(200);
dev2.push_back(300);

// matrix:
vec12.push_back(dev);
vec12.push_back(dev1);
vec12.push_back(dev2);


     return 0;
}