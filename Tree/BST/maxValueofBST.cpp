#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};
int maxValue(Node *root){
    if(root==nullptr) return -1;
    int ans=-1;
    while(root){
        ans=root->data;
        root=root->right;
    }
    return ans;
}
int main()
{
    Node *root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(6);
    root->left->left = new Node(3);
    root->left->left->left = new Node(1);
    root->right->right = new Node(7);
    int ans=maxValue(root);
    ans!=-1 and cout <<"Minimum Value in BST: "<<ans;
    return 0;
}