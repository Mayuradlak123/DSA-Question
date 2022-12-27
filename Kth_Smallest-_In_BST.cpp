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
void PreOrder(Node *root){
    if(root==NULL){
        return ;
    }
    PreOrder (root->left);

    cout <<root->data<<" ";

    PreOrder (root->right);
    
}
int32_t main(){
    
    Node *root=new Node(8);

    root->left=new Node(6);

    root->right =new Node(10);

    root->left->left =new Node(5);

    root->left->right=new Node(7);

    root->right->right=new Node(11);

    root->right->left=new Node(9);

}