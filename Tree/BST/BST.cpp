#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data=val;
        left = nullptr, right = nullptr;
    }
};
void Inorder(Node *root){
    if(root==nullptr)return;
    Inorder(root->left);
    cout <<root->data<<" ";
    Inorder(root->right);
}
void PostOrder(Node *root){
    if(root==nullptr)return ;
    PostOrder(root->right);
    cout <<root->data<<" ";
    PostOrder(root->left);
}
int main()
{
    Node *root =new Node (13);
    root->left= new Node (11);
    root->right=new Node (16);
    root->left->left=new Node (9);
    root->left->right=new Node (12);
    root->right->left=new Node (15);
    root->right->right=new Node (18);
    root->left->left->left=new Node (8);
    root->left->left->right=new Node (10);
    root->right->right->left=new Node (17);
    root->right->right->right=new Node (19);
    // Inorder(root); // Inorder Traversal of BST return Accending Order Sorted Array
 PostOrder(root); // Post Order Traversal Is Return Deccending Order Sorted Array 
    return 0;
}