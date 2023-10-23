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
        left = NULL;
        right = NULL;
    }
};
Node *insertionLevelOrder(vector<int> arr, int i, int n)
{
    Node *root = NULL;
    if (i < n)
    {
        root = new Node(arr[i]);
        root->left = insertionLevelOrder(arr, 2 * i + 1, n);
        root->right = insertionLevelOrder(arr, 2 * i + 2, n);
    }
    return root;
}
void traversal(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        traversal(root->left);
        traversal(root->right);
    }
}
int main(int argc, char const *argv[])
{
    int i, n, temp;
    vector<int> v;
    cout << "Enter size of array : " << endl;
    cin >> n;
    cout << "Enter Element of array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    cout << v[n - 1] << " ";
    Node *root = insertionLevelOrder(v, 0, n);
    cout << "Tree Traversal: " << endl;
    traversal(root);
    return 0;
}
