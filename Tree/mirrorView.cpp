#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/invert-binary-tree/
class Node
{
public:
    Node *left, *right;
    int data;
    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};
void mirror(Node *root)
{
    if (!root)  return;
    mirror(root->left);
    mirror(root->right);
    swap(root->left, root->right);
}
void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
    }
    if (root->left != nullptr)
    {
        q.push(root->left);
    }
    if (root->right != nullptr)
    {
        q.push(root->right);
        if (root->left != nullptr)
        {
            q.push(root->left);
        }
    }
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
}