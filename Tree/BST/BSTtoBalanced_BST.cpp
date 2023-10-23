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
        left = nullptr, right = nullptr;
    }
};
void traversal(Node *root, vector<int> &v)
{
    if (root == nullptr)
        return;
    traversal(root->left, v);
    v.push_back(root->data);
    traversal(root->right, v);
}
Node *buildTree(int start, int end, vector<int> v)
{
    if (start > end)
        return nullptr;
    
    int mid = (start + end) / 2;
    Node *root = new Node(v[mid]);
    root->left = buildTree(start, (mid - 1), v);
    root->right = buildTree((mid + 1), end, v);
    return root;
}
void BST(Node *root)
{
    if (root == nullptr)
        return;
    BST(root->left);

    cout << root->data << " ";
    
    BST(root->right);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(8);
    root->left->left = new Node(7);
    root->left->left->left = new Node(6);
    root->left->left->left->left = new Node(5);

    vector<int> v;
    traversal(root, v);

    Node *ans= buildTree(0,v.size()-1,v);
    cout << "Balanced Binary Search Tree :"<<endl;
    BST(ans);
    return 0;
}