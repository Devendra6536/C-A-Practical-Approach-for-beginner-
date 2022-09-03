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
bool GetPath(Node* root,vector<int>&v,int khoj){
    if(root == NULL) return false;

    v.push_back(root->data);
    if(root->data == khoj ) return true;
    bool lt = GetPath(root->left,v,khoj);
    bool rt = GetPath(root->right,v,khoj);
    if(lt || rt) return true;
    v.pop_back();
    return false;
}

bool leftBoundaryTraversal(Node* root,vector<int>&ds){
    if(root == NULL) return false;
    if(root->left == NULL && root->right==NULL) return true;
    ds.push_back(root->data);
    if(leftBoundaryTraversal(root->left,ds)==true || 
    leftBoundaryTraversal(root->right,ds)==true) return true;
    return false;  

}
void LeafNode(Node* root,vector<int>&ds){
    if(root == NULL) return;
    LeafNode(root->left,ds);
    if(root->left == NULL && root->right == NULL) ds.push_back(root->data);
    LeafNode(root->right,ds);
}
bool rightBoundaryTraversal(Node* root,stack<int>&ds){
    if(root == NULL) return false;
    if(root->left == NULL && root->right==NULL) return true;
    ds.push(root->data);
    if(rightBoundaryTraversal(root->left,ds)==true || 
    rightBoundaryTraversal(root->right,ds)==true) return true;
    return false;  

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
        cout<<endl<<endl<<endl<<endl;
        vector<int>v;
        int khoj = 7;
        if(GetPath(root,v,khoj)) 
        {
            cout<<"The path from root to Node "<<khoj <<" is ----->>>> ";
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else cout<<"The Node is not present that you enter";
        cout<<endl<<endl;






// Boundary Traversal Of Tree
        vector<int>ds;
        leftBoundaryTraversal(root,ds);
        LeafNode(root,ds);
        stack<int>st;
        rightBoundaryTraversal(root->right,st);
        while(!st.empty()){
            ds.push_back(st.top());
            st.pop();
        }
        cout<<"The left Boundary, leaf nodes and the right boundary Nodes are ";
        for(int i=0;i<ds.size();i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
    return 0;
}