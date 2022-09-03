#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

/* Boundary Traversal  = leftBoundary Nodes eccluding(leaf node) +
 All Leaves Nodes + rightBoundary Nodes eccluding(leaf node)*/


/*Time Complexity: O(N).
Reason: The time complexity will be O(H) + O(H) + O(N) which is ≈ O(N)
Space Complexity: O(N)
Reason: Space is needed for the recursion stack while adding leaves. In the worst case (skewed tree), space complexity can be O(N).*/
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