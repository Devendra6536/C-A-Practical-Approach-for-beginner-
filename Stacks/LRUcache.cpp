#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class node{
        public:
        int key;
        int val;
        node* next;
        node* prev;
        node(int _key,int _val){
            key = _key;
            val = _val;
        }
    };
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    
    int cap;
    unordered_map<int, node*>m;
    LRUCache(int capacity) {
        cap = capacity; 
        head -> next = tail;
        tail -> prev = head;
    }
    void addNode(node* newnode){
        node * temp = head -> next;
        newnode -> next = temp;
        newnode -> prev = head;
        head -> next = newnode;
        temp -> prev = newnode;
    }
    void deleteNode(node* delNode){
        node* delprev = delNode -> prev;
        node* delnext = delNode -> next;
        delprev -> next = delnext;
        delnext -> prev = delprev;
        
    }
    int get(int key) {
        if(m.find(key) != m.end()){
            node* resnode = m[key];
            int res = resnode->val;
            m.erase(key);
            deleteNode(resnode);
            addNode(resnode);
            m[key] = head->next;
            
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            node* existNode = m[key];
            m.erase(key);
            deleteNode(existNode);
        }
        if(m.size()==cap){
            m.erase(tail->prev->key);
            deleteNode(tail->prev);            
        }
        
        addNode(new node(key,value));
        m[key] = head->next;
    }
int main()
{
        /* code here */

    return 0;
}