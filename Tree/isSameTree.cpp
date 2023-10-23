#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/same-tree/

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

bool isSameTree(Node *root1, Node *root2)
{

    if (root1 == nullptr && root2 == nullptr)
    {
        return true;
    }
    if (root1 == nullptr || root2 == nullptr || root1->data != root2->data)
    {
        return false;
    }
    return isSameTree(root1->left, root2->left) && isSameTree(root1->right, root2->right);
}
int main(int argc, char const *argv[])
{
    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(4);

    if (isSameTree(root1, root2))
    {
        cout << "Both trees are equal: " << endl;
    }
    else
    {
        cout << "Both trees are not equal: " << endl;
    }
    return 0;
}
