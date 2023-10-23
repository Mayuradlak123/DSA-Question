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
        left = nullptr;
        right = nullptr;
    }
};
Node *arrayToBST(int i, int n, int *arr)
{
    Node *root = nullptr;
    // Cunstruct a Binary Search Tree
    if (i < n)
    {
        root = new Node(arr[i]);
        root->left = arrayToBST(2 * i + 1, n, arr);
        root->right = arrayToBST(2 * i + 2, n, arr);
    }
    return root;
}
void levelOrderTraversal(Node *root)
{
    if (root == nullptr)
        return;

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
}
int main()
{
    int i, n;
    cout << "Enter n : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array element: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Node *root = arrayToBST(0, n, arr);
    cout << "Level Order Traversal : "<<endl;
    levelOrderTraversal(root);
    return 0;
}