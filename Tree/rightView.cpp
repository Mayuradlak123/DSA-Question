#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/binary-tree-right-side-view/
class Node {
    public:
    int data;
    Node *left,*right;
    Node (int val){
        data=val;
        left=right=NULL;
    }
};
void rightView(Node *root){
    if(!root){
        return;
    }
    cout <<root->data<<" ";
    rightView(root->right);
}
int main (){
     Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    rightView(root);
       
    // Free memory
    free(root);
    return 0;
}