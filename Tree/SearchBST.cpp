#include "bits/stdc++.h"
using namespace std;

class Node {
    public:
    int data;
    Node *left,*right;
    Node (int val){
        data=val;
        left=NULL,right=NULL;
    }
};
bool search(Node *root,int x){
    if(!root){
        return false;
    }
    if (root->data==x){
        return true;
    }
    else if(root->data>x){
        search(root->left,x);
    }
    else{
        search(root->right,x);
    }
}
int main (){
  Node *root=new Node(3);
  root->left=new Node (2);
  root->right=new Node(7);
  root->left->left=new Node(1);
  root->right->left=new Node(5);
  root->right->right=new Node(8);
  root->right->left->left=new Node(4);
  root->right->left->right=new Node (6);
  int x;
  cout <<"Enter key for search in BST : "<<endl;
  cin>>x;
  if(search(root,x)){
    cout <<"Key Found in Binary Search Tree : "<<endl;
  }
  else{
    cout<<"Not Found : "<<endl;
  }
     
    // Free memory
    free(root);
  return 0;
}