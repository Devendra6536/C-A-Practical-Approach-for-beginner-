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

Node* minValue(Node* root){
    while(root->left){
        root = root->left;
    }
    return root;
}
Node* maxValue(Node* root){
    while(root->right){
        root = root->right;
    }
    return root;
}

Node* DeletionFromBST(Node* root,int val){
    if(root == NULL) return root;

    if(root->data == val){
        // deletion logic
        // 0 child
        if(root->left==NULL && root->right){
            delete root;
            return NULL;
        }

        // 1 child
        // Left child
        if(root->left != NULL && root->right == NULL){
            Node* temp =  root->left;
            delete root;
            return temp;
        }
        // Right child
        if(root->left == NULL && root->right != NULL){
            Node* temp =  root->right;
            delete root;
            return temp;
        }
    
        // root have two child
        if(root->left && root->right){
            int min_val = minValue(root->right)->data;
            root->data = min_val;
            root->right = DeletionFromBST(root->right,min_val);
            return root;
        }
    }
    else if(root->data > val){
        // go to in the left part
        root ->left  = DeletionFromBST(root->left,val);
        return root;
    }
    else{
        // go to in the right part
        root->right = DeletionFromBST(root->right,val);
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
        cout<<"Postorder traversal -> ";
        PostOrderTraversal(root);
        cout<<endl;
        cout<<"Preorder traversal -> ";
        PreorderTraversal(root);
        cout<<endl;

    
        root = DeletionFromBST(root,50);
        cout<<endl;
        cout<<"Print The BST"<<endl;
        LevelOrderTravLableWise(root);

        cout<<"Inorder traversal  -> ";
        InorderTraversal(root);
        cout<<endl;
        cout<<"Postorder traversal -> ";
        PostOrderTraversal(root);
        cout<<endl;
        cout<<"Preorder traversal -> ";
        PreorderTraversal(root);
        cout<<endl;
    return 0;
}

// 100 50 110 25 70 120 60 115 -1