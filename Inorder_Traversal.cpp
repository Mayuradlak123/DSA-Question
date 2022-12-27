#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;

    Node *left ;

    Node *right;

    Node (int val){

        data=val;

        left=NULL;

        right=NULL;

    }
};
void Preorder(Node *root){
    if(root==NULL){
        return ;
    }
    cout << root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(Node *root){
   if(root==NULL){
       return ;
   }

    Inorder(root->left);

    cout <<root->data<<" ";

    Inorder(root->right);
}
int main(){
       Node *root =new Node(8);

     root->left=new Node(9);
 
     root->right=new Node(10);

     root->left->left=new Node(11);

     root->left->right=new Node(12);
     Inorder(root);
     
     return 0;
     
}