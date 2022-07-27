#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


// T.C => O(N) and S.C => O(N);
Node *copyList(Node *head)
    {
        //Write your code here
        Node* clone = new Node(-1);
        Node* temp = clone;
        
        Node* t1 = head;
        while(t1){
            Node* node = new Node(t1->data);
            temp->next = node;
            t1 = t1->next;
            temp = temp->next;
        }
        
    
        unordered_map<Node*,Node*>mp;
        
        Node* ori = head;
        Node* cl = clone->next;
        while(ori && cl){
            mp[ori] = cl;
            ori = ori->next;
            cl = cl->next;
        }
    
        ori = head;
        cl = clone->next;
        while(ori){
            cl->arb = mp[ori->arb];
            ori = ori->next;
            cl = cl->next;
        }

    
        return clone->next;
    }


// T.C => O(N) and S.C => O(1);
 Node* copyRandomList(Node* head) {
        Node* clone = new Node(-1);
        Node* temp = clone;
// copy the Original list to Clone list
        Node* t1 = head;
        while(t1){
            Node* node = new Node(t1->val);
            temp->next = node;
            t1 = t1->next;
            temp = temp->next;
        }
       
      
// Step-2 : CloneNode add in between the original list

      Node* originalNode = head;
      Node* cloneNode = clone->next;
      
      while(originalNode &&  cloneNode ){
         Node* next = originalNode->next;
          originalNode->next = cloneNode;
          originalNode = next;
          
          next  = cloneNode->next;
          cloneNode->next = originalNode;
          cloneNode = next;
      }
// Step -3 : Now Set the random pointer

       temp = head;
      while( temp ){
          if(temp->next){
            temp->next->random = temp->random ? temp->random->next : temp->random;
          }
          temp = temp -> next -> next;
      }
// Step-4: Revert back the change are done in the second step 
      originalNode = head;
      cloneNode = clone->next;
      
      while( originalNode && cloneNode ){
          originalNode->next = cloneNode->next;
          originalNode = originalNode->next;
          
          if(originalNode){
              cloneNode->next = originalNode->next;
          }
          cloneNode = cloneNode->next;
      }
      
// return the ans;
      return clone->next;
    }
int main()
{
        /* code here */

    return 0;
}