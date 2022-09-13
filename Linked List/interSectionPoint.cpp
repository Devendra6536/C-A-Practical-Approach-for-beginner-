#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
ListNode* interSection(ListNode* head1,ListNode* head2){
    unordered_set<ListNode*>st;
    while(head1->next){
        st.insert(head1);
        head1 = head1->next;
    }
    while(head2->next){
        if(st.find(head2) != st.end()) return head2;
        head2 = head2->next;
    }
    return NULL;
}
int diff(ListNode* head1){
    int len=0;
    while(head1){
        len++;
        head1 = head1->next;
    }
return len;
}
ListNode* interSection(ListNode* head1,ListNode* head2){
    int i = diff(head1);
    int j = diff(head2);
    int diff = i-j;

    if(diff<0) while(dif++!=0) head2 = head2->next;
    else while(diff--!=0) head1 = head->next;
    while(head1){
        if(head1==head2) return head1;
        head1 = head1->next;
        head2 = head2->next;
    }
}



ListNode* InterSectionUsingshortCODE(ListNode* head1,listNode* head2){
    ListNode* a = head1;
    ListNode* b = head2;
    while (a!=b){
        a = a == NULL ? head2 : a = a->next;
        b = b == NULL ? head1 : a = b->next;
    }
    {
        /* code */
    }
    

}
int main()
{
        /* code here */

    return 0;
}