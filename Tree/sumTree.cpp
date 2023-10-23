#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int getSum(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return (root->data + getSum(root->left) + getSum(root->right));
}

void sumTree(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    root->data = getSum(root->left) + getSum(root->right);
    sumTree(root->left);
    sumTree(root->right);
}

void levelOrderTraversal(Node *root)

{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    levelOrderTraversal(root->left);
    levelOrderTraversal(root->right);
  }
int main(int argc, char const *argv[])
{
    Node *root = new Node(3);
    root->left = new Node(1);
    root->right = new Node(2);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
    root->right->left = new Node(70);
    sumTree(root);
    cout << "Level Order Traversal: " << endl;
    levelOrderTraversal(root);

    // Free memory
    free(root);
    
    return 0;
}
