#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class node{
	public:
		int data;
		node* next;
		
		node(int val){
			data = val;
			next = NULL;
		}
	
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
    
        ListNode* temp = new ListNode(-1);
        temp->next = head;
        ListNode* slow = temp;
        ListNode* fast = temp;
        
        while(n--) fast = fast->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return temp->next;
    }
int main()
{
        /* code here */

    return 0;
}