#include "bits/stdc++.h"
using namespace std;
class Node{
    public:
    int data;
     int sum=0;
    Node *left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
}

void leafSum(Node *root,bool f){
    
    if(root==NULL){
        return;
    }
    if(root->left==NULL and root->right==NULL){
         Node::sum+root->data;
    }
    leafSum(root->left,true);
    leafSum(root->right,false);
cout <<sum;
} 
int findSum(Node *root){
   
    if(root==NULL){
        return 0;
    }
    leafSum(root,false);
    return Node::sum;
}
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
   cout << "Sum of Leaf node is : "<<findSum(root)<<endl;
    return 0;
}