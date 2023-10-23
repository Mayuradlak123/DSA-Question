#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    // Constructor to create a new node of the tree.
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
Node *lowestCommanAncestor(Node *root, int n1, int n2)
{
    if (root == nullptr)
        return nullptr;
    if(root->data==n1 or root->data==n2){
        return root;
    }
    Node *leftAns=lowestCommanAncestor(root->left,n1,n2);
    Node *rightAns=lowestCommanAncestor(root->right,n1,n2);
    if(leftAns!=nullptr and rightAns!=nullptr){
        return root;
    }
    else if (leftAns!=nullptr and rightAns==nullptr){
        return leftAns;
    }
    else if (rightAns==nullptr and rightAns!=nullptr){
        return rightAns;
    }
    else{
        nullptr;
    }
}
int main()
{
    int n,m;
    cout << "Enter Node 1: "<<endl;
    cin>>n;
    cout << "Enter Node 2: "<<endl;
    cin>>m;
    Node *root = new Node(5);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    Node * ans=lowestCommanAncestor(root,n,m);
    cout <<"Lowest Common Ancestor: "<<ans->data<<" ";
    return 0;
}