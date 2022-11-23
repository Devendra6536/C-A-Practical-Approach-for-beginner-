#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int left = 0,top=0;
        int right = n-1;
        int bottom = m-1;
        vector<vector<int>>v(m,vector<int>(n,-1));
        while(head){            
            
            for(int i = left; i <= right && head ; i++){
                v[top][i] = head->val;
                 head = head->next;
            }
            top++;
                for(int i=top;i<=bottom && head ;i++){
                v[i][right] = head->val;
                head = head->next;
                
            }
            right--;
             for(int i=right; i>=left && head ; i--){
                v[bottom][i] = head->val;
                 head = head->next;
                 
            }
            bottom--;
            for(int i=bottom; i>= top && head ;i--){
                v[i][left] = head->val;
                 head = head->next;
            }
            left++;
        }
        return v;
    }
int main()
{
        /* code here */

    return 0;
}