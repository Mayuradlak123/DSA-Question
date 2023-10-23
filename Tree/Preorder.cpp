#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/binary-tree-preorder-traversal/
class Node
{
public:
    Node *left, *right;
    int data;
    Node(int val)
    {
        data = val;
        left = NULL, right = NULL;
    }
};
void Preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Preorder(root->left);
    cout << root->data << " ";
     Preorder(root->right);
}
int main()
{

    Node *root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(10);
    root->left->left = new Node(2);
    root->left->right = new Node(1);
    root->right->left = new Node(5);
    root->right->right = new Node(11);
    Preorder(root);
    return 0;
}