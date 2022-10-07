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
};
Node* insertIntoBST(Node* root,int data){

    // base case
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    else{
        // if the data is less than root
        if(data > root->data) root->right = insertIntoBST(root->right,data);

        // if the data is greater than root
        else root->left = insertIntoBST(root->left,data);
    }
    return root;
}
void insertData(Node* &root){

    int data;
    cin >> data;

    while(data != -1){
        insertIntoBST(root,data);
        cin >> data;
    }
}
void printBST(Node* root){
    if(root == NULL) return;
    printBST(root->left);
    cout << "hello " << root ->data <<" ";
    printBST(root->right);
}
int main()
{
        /* code here */
        cout<< "Enter the data "<<endl;
        Node* root=NULL;
        insertData(root);
        printBST(root);

    return 0;
}