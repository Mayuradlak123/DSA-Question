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
void traversal(Node *root, vector<int> &ans)
{
    if (root == nullptr)
        return;

    ans.push_back(root->data);
    traversal(root->left, ans);
    traversal(root->right, ans);
}
Node *treetoBST(int start, int end, vector<int> v)
{
    if (start > end)
        return nullptr;

    int mid = (start + end) / 2;
    Node *root = new Node(v[mid]);

    root->left = treetoBST(start, (mid - 1), v);
    root->right = treetoBST(mid + 1, end, v);

    return root;
}
void Inorder(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    Inorder(root->left);

    Inorder(root->right);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> v;
    traversal(root, v);
    sort(v.begin(), v.end());

    Node *ans = treetoBST(0, v.size() - 1, v);
    cout << "Inorder Traversal of BST" << endl;
    
    Inorder(ans);
    return 0;
}