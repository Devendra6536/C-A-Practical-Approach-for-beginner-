#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL && head->next==NULL) return head;
    
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* curr=dummy,*nex=dummy,*prev=dummy;
        int len=0;
        
        while(curr->next){
            len++;
            curr = curr->next;
        }
        
        while(len >= k){
            curr= prev->next;
            nex = curr->next;
            
            for(int i=0;i<k-1;i++){
                curr->next = nex->next;
                nex->next = prev->next;
                prev->next = nex;
                nex = curr->next;
            }
            len-=k;
            prev = curr;
        }
    return dummy->next;    
    }

ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL && head->next==NULL) return head;
    
        int len = getLength(head);
    
        if(len < k) return head;
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        int cnt = 0;
        while(curr && cnt++<k ){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        if(next) head->next = reverseKGroup(next,k);
        
        return prev;
    }
    
int main()
{
        /* code here */

    return 0;
}