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
        left = NULL, right = NULL;
    }
};
bool getNode(Node *root, int x)
{
    if (!root)
    {
        return false;
    }
    if (root->data == x)
    {
        return true;
    }
    else
    {
        getNode(root->left, x);
        getNode(root->right, x);
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    int x;
    cout << "Enter node for search : " << endl;
    cin >> x;
    if (getNode(root, x))
    {
        cout << "Node is Present in Tree: " << endl;
    }
    else
    {
        cout << "Node is not present in Tree: " << endl;
    }
       
    // Free memory
    free(root);
    return 0;
}