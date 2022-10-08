#include<iostream>
#include<bits/stdc++.h>
#include<queue>
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
Node* insertIntoBST(Node* root,int d){

    // base case
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }
    else{
        // if the data is less than root
        if(d > root->data) {
            root->right = insertIntoBST(root->right,d);
        }
        // if the data is greater than root
        else{
            root->left = insertIntoBST(root->left,d);
        } 
    }
    return root;
}
void insertData(Node* &root){

    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root,data);
        cin >> data;
    }
}
void printBST(Node* root){
    if(root == NULL) return;
    printBST(root->left);
    cout << "hello " << root ->data <<" ";
    printBST(root->right);
}
void LevelOrderTravLableWise(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp != NULL)
        {
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        else{
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
    }
}
int main()
{
        /* code here */
        cout<< "Enter the data "<<endl;
        Node* root=NULL;
        insertData(root);
        // printBST(root);
        cout<<"Print The BST"<<endl;
        LevelOrderTravLableWise(root);

    return 0;
}