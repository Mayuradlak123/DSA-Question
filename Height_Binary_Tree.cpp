#include<bits/stdc++.h>
using namespace std;
class Node{
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
int cal_Height(Node *root){
    if(root==NULL){
        return 0;
    }
    int lHeight=cal_Height(root->left);

    int rHeight=cal_Height(root->right);

    return max(lHeight,rHeight)+1;
}
int main(){

    Node *root =new Node(1);

    root->left=new Node(2);

    root->right=new Node(3);

    root->left->left=new Node(4);

    root->left->right=new Node(5);

    root->right->left=new Node(6);

    root->right->right=new Node(7);

    cout<<cal_Height(root);
    
    return 0;
}