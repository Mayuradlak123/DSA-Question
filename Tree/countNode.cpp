#include "bits/stdc++.h"
using namespace std;

// Leetcode : https://leetcode.com/problems/count-complete-tree-nodes/
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        left = right = nullptr;
        data = val;
    }
};

int countNodes(Node *root)
{
    if (root == nullptr)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    return 0;
}