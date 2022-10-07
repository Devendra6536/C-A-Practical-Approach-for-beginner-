#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
}
void insertIntoBST(Node* root,int data){

    // base case
    if(root == NULL){
        root = new Node(data);
        return;
    }
    else{
        // if the data is less than root
        if(data > root->data) root->right = insertIntoBST(root->right,data);

        // if the data is greater than root
        else root->left = insertIntoBST(root->left,data);
    }
    return root;
}
Node* insertData(Node* root){

    int data;
    cin >> data;

    while(data != -1){
        insertIntoBST(root,data);
        cin >> data;
    }
}
int main()
{
        /* code here */
        cout<< "Enter the data "<<endl;
        Node* root;
        root = insertData(root);
        printBST(root);

    return 0;
}