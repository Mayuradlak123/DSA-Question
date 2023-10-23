#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/binary-tree-postorder-traversal/
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
void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
int main()
{

    Node *root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(10);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(11);
    postOrder(root);
    return 0;
}
//https://www.fiverr.com/users/mayuradlak/manage_gigs/do-something-really-good/edit?wizard=1