#include "bits/stdc++.h"
using namespace std;
class Node {
    public:
    int data;
    Node *left, *right;
    Node(int val){
        data=val;
        left=NULL,right=NULL;
    }
};
int heightOfBst(Node *root){
    if(root==NULL){
        return 0;
    }
    int left=heightOfBst(root->left);
    int right=heightOfBst(root->right);
    return max(left,right)+1;
}
int main(){
    Node *root=new Node(10);
     root->left=new Node(20);
    root->right=new Node(30);
    root->left->right=new Node(50);
    root->left->left=new Node(40);
    root->right->left=new Node(60);
    root->right->left->left=new Node(70);
    int h=heightOfBst(root);
    cout <<"Height of Given Tree : "<<h<<endl;
   return 0;
}