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
void InorderTraversal(Node* root){

    if(root == NULL) return ;
    InorderTraversal(root->left);
    cout<<root->data<<" ";
    InorderTraversal(root->right);

}

Node* inorderPrecedessor(Node* root,int key,map<Node*,Node*>&mp){
    if(root == NULL) return root;

    if(root->data == key){
        if(root->left){
        while(root->left){
            root = root->left;
        }
        }
        else{
            return mp[root];
        }
        return root;
    }
    else if(root->data > key){
        mp[root->left] = root; 
        root->left = inorderPrecedessor(root->left,key,mp);
        return root;
    }
    else{
        mp[root->right] = root;
        root->right = inorderPrecedessor(root->right,key,mp);
        return root;
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

        cout<<"Inorder traversal  -> ";
        InorderTraversal(root);
        cout<<endl;
        map<Node*,Node*>mp;
        cout<<inorderPrecedessor(root,4,mp)->data;
        
    return 0;
}

// 10 7 12 4 11 19 3 5 8 17 20 -1
