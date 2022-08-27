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
void InorderTraversal(Node* root){

    if(root == NULL) return ;
    InorderTraversal(root->left);
    cout<<root->data;
    InorderTraversal(root->right);

}
Node* buildTree(Node* root){

    int data;
    cout<<"Enter data for root Node";
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

        // inoreder traversal 
        InorderTraversal(root);

    return 0;
}