#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            long long gap = ceil((float)m+n/2);
            
            
            while(gap>0){
                long long i =0;
                long long  j = gap;
                while(j<(n+m))
                {
                    if(j<n && arr1[i] > arr1[j]) 
                        swap(arr1[i],arr1[j]);
                    else if(j>=n && i<n &&  arr1[i] > arr2[j-n])
                        swap(arr1[i],arr2[j-n]);
                    else if(j>=n && i>=n && arr2[i-n] > arr2[j-n] ) 
                        swap(arr2[i-n],arr2[j-n]);
                
                i++;
                j++;
                }
                if(gap==1) gap = 0;
                else gap = ceil((float) gap/2);
         }
        } 
int main()
{
        /* code here */
        long long  arr1[] = {1,4,7,8,10};
  long long arr2[] = {2,3,9};
  cout << "Before merge:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << arr1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 3; i++) {
    cout << arr2[i] << " ";
  }
  cout << endl;
  merge(arr1, arr2, 5, 3);
  cout << "After merge:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << arr1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 3; i++) {
    cout << arr2[i] << " ";
  }


    return 0;
}