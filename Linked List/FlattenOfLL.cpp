#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
Node* mergeList(Node* l1,Node*l2){
    Node* temp = new Node(0);
    Node* mergedList = temp;
   
    while(l1 && l2){
        if(l1->data < l2->data){
            temp->bottom = l1;
            temp = temp->bottom;
            l1 = l1->bottom;
        }
        else {
            temp->bottom = l2;
            temp = temp->bottom;
            l2 = l2->bottom;
        }
    }
    if(l1) temp->bottom = l1;
    else temp->bottom  = l2;
    
    return  mergedList->bottom;
}
Node *flatten(Node *root)
{
   // Your code here
   if(root == NULL || root->next==NULL) return root;
 
   return mergeList(root,flatten(root->next));
}
int main()
{
        /* code here */

    return 0;
}
