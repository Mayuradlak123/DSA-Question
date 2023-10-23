#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    // Constructor to create a new node of the tree
    Node(int val)
    {
        data = val;
        left = nullptr, right = nullptr;
    }
};
Node* search_in_BST (Node *root,int k){
     if(!root){
        return nullptr;
     }
     else if (root->data==k){
        
        return root;
     }
     else if (root->data<k){
       return search_in_BST(root->left,k);
     }
     else if (root->data>k){
       return  search_in_BST(root->right,k);
     }
     else{
     return false;
     }
}
int main()
{
    int k;
    cout << "Enter key for searching : "<<endl;
    cin>>k;
    Node *root = new Node(40);
    root->left = new Node(30);
    root->right = new Node(50);
    root->left->left = new Node(23);
    root->left->right = new Node(35);
    root->right->left = new Node(45);
    root->right->right = new Node(60);
    if(search_in_BST(root,k)){
        cout << "Element Found in BST: "<<search_in_BST(root,k)->data<<endl;
    }
    else{
        cout << "Not Found : "<<endl;
    }
    return 0;
}