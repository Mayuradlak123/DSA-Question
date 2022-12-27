#include <iostream>
using namespace std ;
class Node {
    public:
    int data;

    Node *left,*right;
    Node(int val){
        data=val;
        left=NULL,right=NULL;
    }
};
void noSibling(Node *root){
     if(root==NULL){
        return;
     }
     if(!root->right or !root->left){
        cout <<root->data<<" ";
     }
    if(root->right){
     noSibling(root->right);
    }
    if(root->left){
     noSibling(root->left);     
    }
}
int main(){
    Node *root =new Node(10);
    root->left=new Node(9);
    root->right=new Node(11);
    root->left->left=new Node(8);
    root->left->right=new Node(12);
    root->right->right=new Node(13);
    root->right->left=new Node(7);
    cout << "No Sibling node in BST : "<<endl;
    noSibling(root);
    return 0;
}




/*#include "bits/stdc++.h"
using namespace std;
class Node {
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void traversal(Node *root){
    if(root==NULL){
        return ;
    }
       if(!root->left && !root->right){
        cout <<root->data<<" ";
       return ;
       }
       if(root->right){
       traversal(root->right);
       }
       if(root->left){
        traversal(root->left);
       }
      }
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    root->left->left=new Node(4);
    root->right->right=new Node(6);
    root->right->left=new Node(7);
    traversal(root);
    return 0;
}*/