#include <bits/stdc++.h>
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
bool Inorder(Node *root,int x){
    if(root==NULL){
        return false;
    }
    Inorder(root->left,x);
    if(root->data==x){
        return true;
    }
    Inorder(root->right,x);
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
 
  int x;
  cout << "Enter value of Node for find : "<<endl;
  cin>>x;
//  cout << "Inorder traversal of Binary Tree : "<<endl;
  if(Inorder(root,x)){
    cout <<"Node Found in Binary Search Tree: "<<endl;
  }
  else{
    cout << "Not Found in Binary Search Tree: "<<endl;
  }
  return 0;
}