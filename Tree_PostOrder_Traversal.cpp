#include "bits/stdc++.h"
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data==val;
        left=NULL;
        right=NULL;
    }
};
void Postorder(Node *root){
    if(root==NULL){
        return 
    }
    Postorder(root->right);
    Postorder(root->left);
    cout << root->data<<" ";
}
int main(){
   
   cout << "Inorder Traversal of Binary Tree" << endl;
     Node *root =new Node(1);

     root->left=new Node(2);
 
     root->right=new Node(3);

     root->left->left=new Node(4);

     root->left->right=new Node(5);
     
     root->right->right=new Node(7);
     
     root->right->left=new Node(6);
   Postorder(root);  
      return 0;
}