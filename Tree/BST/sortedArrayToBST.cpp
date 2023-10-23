#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};
Node *arrayToBST(int *arr, int start, int end)
{
    if (start >end)
        return nullptr;
    int mid = (start + end) / 2;
    Node *root = new Node(arr[mid]);
    root->left = arrayToBST(arr, start,mid-1);
    root->right = arrayToBST(arr,  mid + 1,end);

    return root;
}
void print(Node *root)
{
    if (root == nullptr)
        return;
    print(root->left);
    print(root->right);
    cout << root->data <<" ";
}
int main()
{
    int i, n;
    cout << "Enter n :" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array Element : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Node *root = arrayToBST(arr, 0, n-1);
    cout <<" Inorder Traversal : "<<endl;
    print(root);
    return 0;
}