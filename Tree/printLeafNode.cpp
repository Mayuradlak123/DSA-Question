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
        left = NULL;
        right = NULL;
    }
};
void printLeaf(Node *root)
{
    if (!root)
    {
        return;
    }
    if (root->left == NULL and root->right == NULL)
    {
        cout << root->data << " ";
    }
    if (root->left)
    {
        printLeaf(root->left);
    }
    if (root->right)
    {
        printLeaf(root->right);
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    cout << "All Leaf Node in Binary Tree: " << endl;
    printLeaf(root);
       
    // Free memory
    free(root);
    return 0;
}