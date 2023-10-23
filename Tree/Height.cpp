#include "bits/stdc++.h"
using namespace std;
// Leetcode: https://leetcode.com/problems/maximum-depth-of-binary-tree/
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
Node *buildTree(vector<int> arr, int i, int n)
{
    if (n == 0)
        return nullptr;
    Node *root = nullptr;
    if (i < n)
    {
        root = new Node(arr[i]);
        root->left = buildTree(arr, 2 * i + 1, n);
        root->right = buildTree(arr, 2 * i + 2, n);
    }
    return root;
}

void traversal(Node *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    traversal(root->left);
    traversal(root->right);
}

void levelOrder(Node *root)
{
    if (!root)
        return;

    queue<Node *> que;
    que.push(root);
    while (!que.empty())
    {
        Node *top = que.front();
        que.pop();
        cout << top->data << " ";
        if (top->left)
        {
            que.push(top->left);
        }
        if (top->right)
        {
            que.push(top->right);
        }
    }
}

int Height(Node *root)
{
    if (root == nullptr)
        return 0;
    int leftMax = Height(root->left);
    int rightMax = Height(root->right);
    return max(leftMax, rightMax) + 1;
}
int main(int argc, char const *argv[])
{

    int i, n, temp;
    cout << "Enter size of array : " << endl;
    cin >> n;
    vector<int> arr;
    cout << "enter elements in the tree" << endl;
    for (i = 0; i < n; ++i)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    Node *root = buildTree(arr, 0, n);

    cout << "Height of Tree: " << Height(root);
    printf("\n Tree Level  Traversal : \n");
    levelOrder(root);
    cout << "\n Inorder Traversal : \n"
         << endl;
    traversal(root);
    return 0;
}
