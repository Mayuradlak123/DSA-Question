#include "bits/stdc++.h"
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void sumReplace(Node *root){
    if(root==NULL){
        return ;
    }
    sumReplace(root->left);
    sumReplace(root->right);
    if(root->left!=NULL){
    root->data=+root->left->data;
    }
    if(root->right!=NULL){
      root->data=+root->right->data;
     }
}
void Inorder(Node *root){
    if(root==NULL){
    return ;
    }
     Inorder(root->left);
     cout<<root->data<<" ";
     Inorder(root->right); 
}
int main(){
    Node *root=new Node(10);
    root->left=new Node(-2);
   root->right=new Node(6);
   root->left->left=new Node(8);
   root->left->right=new Node(-4);
   root->right->left=new Node(7);
   root->right->right=new Node(5);
   Inorder(root);
   sumReplace(root);
   cout <<endl;
   Inorder(root);
}