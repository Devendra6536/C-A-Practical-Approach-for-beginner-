#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// brute force
ListNode* rotateRight(ListNode* head, int k) {
        ListNode* t1;
        if(head==NULL || head->next==NULL) return head;
        while(k--){          
            ListNode* t2 = head;
            while(t2->next->next) t2 = t2->next;
            t1 = t2->next;
            t2->next = NULL;
            t1->next = head;
            head = t1;
        }
        return head;
    }

    // optimal

ListNode* rotateRight(ListNode* head, int k) {
        ListNode* t1=head;
        if(head==NULL || head->next==NULL) return head;
       
        int len = 1;
        while(t1->next){
            t1 = t1->next;
            len++;
        }
    
        t1->next = head;
        k = k%len;
        int end = len-k;
        while(end--) t1 = t1->next;
        head = t1->next;
        t1->next = NULL;
        
        return head;
        
    }
int main()
{
        /* code here */

    return 0;
}