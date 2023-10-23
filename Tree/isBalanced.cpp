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
void Traverse(Node *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    Traverse(root->left);
    Traverse(root->right);
}

int checkBalance(Node *root)
{
    if (!root)
        return 0;

    return 1 + max(checkBalance(root->left), checkBalance(root->right));
}

bool isBalanced(Node *root)
{
    if (root==nullptr)
        return true;

    int leftHeight = checkBalance(root->left);
    int rightHeight = checkBalance(root->right);

    if (abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
    {
        return true;
    }
    return false;
}
  
int main(int argc, char const *argv[])
{
    Node *root = new Node(10);
    // root->left = new Node(5);
    root->right = new Node(30);
    root->right->left = new Node(15);
    // root->right->right = new Node(20);
    if (isBalanced(root))
    {
        cout << "Tree is balanced" << endl;
    }
    else
    {
        cout << "Tree is not balanced" << endl;
    }
    // Don't forget to free the memory allocated for the tree
    delete root;
    return 0;
}
