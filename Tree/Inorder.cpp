
/* This is Binary Search Tree
 Rule for BST
 1.) The left subtree of a node contains only nodes with keys lesser than the node’s key.
 2.) The right subtree of a node contains only nodes with keys greater than the node’s key.
 3.) The left and right subtree each must also be a binary search tree.
*/


#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/binary-tree-inorder-traversal/
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
void Inorder(Node *root)
{
    if (!root)
        return;
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
int main()
{
    Node *root = new Node(40);
    root->left = new Node(30);
    root->right = new Node(50);
    root->left->left = new Node(25);
    root->left->right = new Node(35);
    root->right->left = new Node(45);
    root->right->right = new Node(60);

    Inorder(root);
    return 0;
}