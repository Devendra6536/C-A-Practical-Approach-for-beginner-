#include<iostream>
#include<bits/stdc++.h>
 #include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size()==0){
            return false;
        }
        
        int n= matrix.size();
        int m = matrix[0].size();
        
        int low = 0;
        int high = (m*n)-1;
        
        while(low<=high){
            
        int mid  = (low+(high-low)/2);          
            
            if(matrix[mid/m][mid%m] == target)
            {
                return true;
            }
            
            if(matrix[mid/m][mid%m] > target)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
            
        }
        return false;
    }

bool SearchElementInSortedMatrix(vector<vector<int>>matrix,int target){
    int n = matrix.size();
    int m = matrix[0].size();
    int i=0,j=m-1;
    while(i<n && j>= 0){
        if(target == matrix[i][j] ) return true;
        else if(matrix[i][j] > target) j--;
        else i++;
    }
    return false;
}
int main()
{
        /* code here */
vector< vector<int> > matrix {
    {1,2,3,4},
    {4,5,6,7},
    {8,9,10,11}
};
 searchMatrix(matrix,6)?cout<<"present":cout<<"not presetn";
 cout<<endl;
 cout<<"The Naive approach";
 SearchElementInSortedMatrix(matrix,6)?cout<<"Present":cout<<"not presetn";
    return 0;
}