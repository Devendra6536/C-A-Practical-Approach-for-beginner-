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
bool searchINBST(Node* root,int val){
    if(root == NULL) return false;


    if(root -> data == val) return true;

    if(val > root -> data ) return searchINBST(root->right,val);
    else return searchINBST(root->left,val);
}
Node* searchNodeInABST(Node* root, int val){
    if(root == NULL) return root;

    if(root ->data == val) return root;

    if(root->data < val) return searchNodeInABST(root->right,val);
    else return searchNodeInABST(root->left, val);

}



// Iterative approach 
Node* searchBST(Node* root, int val) {        
        while(root && root->data!=val){
            root = root->data > val ? root->left : root->right;
        }
        return root;
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

int findCeil(Node* root,int key){
    if(root == NULL) return 0;
    int ceil = -1;
    while(root){
        if(root ->data == key){
            ceil = root->data;
            return ceil;
        }
        if(root->data > key){
            ceil = root->data;
            root = root->left;
        }
        else {
            root = root->right;
        }
    }
    return ceil;
}
int findFloor(Node* root,int key){
    int floor = 0;
    while(root){
        if(root->data == key){
            floor = root->data;
            return floor;
        }
        if(root->data > key){
            root = root->left;
        }
        else{
            floor = root->data;
            root = root->right;
        }
    }
    return floor;
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
        cout<<endl<<endl<<endl<<endl;

        cout<<"Search in a BST"<<endl;
        searchINBST(root,11)?cout<<"Present":cout<<"Not Present";
        cout<<endl<<endl<<endl<<endl;

        cout<<endl<<"Search Node in a bst"<<endl;
        Node* temp = searchNodeInABST(root,11);
        PreorderTraversal(temp);
        cout<<endl<<endl<<endl<<endl;

        cout<<"Search Node in a bst using iterative way"<<endl;
        Node* temp1 = searchBST(root,11);
        PreorderTraversal(temp1);



        cout<<endl<<endl<<endl<<endl;
        cout<<"Min value in a bst is -> "<<minValue(root) ->data;
        cout<<endl<<endl<<endl<<endl;
        cout<<"Max value in a bst is -> "<<maxValue(root) ->data;

        cout<<endl<<endl<<endl<<endl;
        cout<<"Ceiling value in the bst is "<<findCeil(root,10);

        cout<<endl<<endl<<endl<<endl;
        cout<<"floor value in the bst is "<<findFloor(root,8);
    return 0;
}

// 10 7 12 4 11 19 3 5 8 17 20 -1