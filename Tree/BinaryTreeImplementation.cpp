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

void ReverseLevelOrderTravLableWise(Node* root){
    queue<Node*>q;
    stack<int>st;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp != NULL)
        {
            st.push(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        else{
            cout<<endl;
            if(!q.empty()) q.push(NULL);

            while(!st.empty())
            {
                cout<<st.top()<<" ";
                st.pop();
            }
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
void BuildFromLevelOrderTraversal(Node* &root)
{
    queue<Node*>q;
    cout<<"Enter the data for the root node "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter the left child of "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter the right child of "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}
void countNoOfNode(Node* root,int &cnt){
    if(root == NULL) return;
    countNoOfNode(root->left,cnt);
    if(root->left == NULL && root->right == NULL) cnt++;
    countNoOfNode(root->right,cnt);
}
int main()
{
        /* code here */
        Node* root=NULL;
        // root = buildTree(root);

        // Buil from levelOrder Traversal
        BuildFromLevelOrderTraversal(root);
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// 1
// 3 5
// 7 11 17
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

        // LevelorderTraversal using Level Wise
        cout<<"LevelorderTraversal of a tree using Level wise"<<endl; 
        ReverseLevelOrderTravLableWise(root);
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


        // count the no of node 
        int cnt=0;
        countNoOfNode(root,cnt);
        cout<<"Total no of leaf node in the tree " << cnt;
    return 0;
}