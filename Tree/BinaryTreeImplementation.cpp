#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int x){
            data = x;
            left = NULL;
            right = NULL;
        }
};
void LevelOreder(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<temp->data<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
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
void PreorderTraversal(Node* root){

    if(root == NULL) return ;
    cout<<root->data<<" ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);

}

void PostOrderTraversal(Node* root){

    if(root == NULL) return ;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";

}
Node* buildTree(Node* root){

    int data;
    cout<<"Enter the data";
    cin>>data;
    root = new Node(data);

    if(data == -1) return NULL;

    cout<<"Enter the data for the left child"<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for the right child"<<endl;
    root->right = buildTree(root->right);
    return root;



}
int main()
{
        /* code here */
        Node* root=NULL;
        root = buildTree(root);

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1


        cout<<endl;
        cout<<endl;
        cout<<endl;
        // LevelorderTraversal
        cout<<"LevelorderTraversal of a tree "; 
        LevelOreder(root);
        cout<<endl;

        // LevelorderTraversal using Level Wise
        cout<<"LevelorderTraversal of a tree using Level wise"<<endl; 
        LevelOrderTravLableWise(root);
        cout<<endl;
        
        // inoreder traversal 
        cout<<"InorderTraversal of a tree "; 
        InorderTraversal(root);
        cout<<endl;
        // PreorderTraversal 
        cout<<"PreorderTraversal of a tree "; 
        PreorderTraversal(root);
        cout<<endl;

        // PostorderTraversal 
        cout<<"PostOrderTraversal of a tree "; 
        PostOrderTraversal(root);
        cout<<endl;

    return 0;
}