#include "bits/stdc++.h"
using namespace std;
class Node {
    public:
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
    left=NULL;
    right=NULL;
    }
};
int minValue(Node *root){
    if(root==NULL){
        return -1;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
int main (){
     Node *root =new Node(8);
  root->left=new Node(3);
  root->right=new Node(10);
  root->left->left=new Node(1);
  root->left->right=new Node(6);
  root->left->right->left=new Node(4);
  root->left->right->right=new Node(7);
  root->right->right=new Node(14);
  root->right->right->left=new Node(13);
 int min=minValue(root);
  cout << "Minimum value in Binary Search Tree : "<<min<<endl;
 

  return 0;
}