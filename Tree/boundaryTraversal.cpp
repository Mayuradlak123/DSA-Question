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

// Node *arrayToTree(vector<int> arr, int i, int n)
// {
//     if (n == 0)
//     {
//         return nullptr;
//     }
//     Node *root = NULL;
//     if (i < n)
//     {
//         root = new Node(arr[i]);
//         root->left = arrayToTree(arr, 2 * i + 1, n);
//         root->right = arrayToTree(arr, 2 * i + 2, n);
//     }
//     return root;
// }

void printLeftNode(Node *root)
{
    if (!root)
    {
        return;
    }
    if (root->left)
    {
        cout << root->data << " ";
        printLeftNode(root->left);
    }
}
void printLeafNode(Node *root)
{
    if (!root)
    {
        return;
    }

    printLeafNode(root->left);
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
    }
    printLeafNode(root->right);
}
void printRightNode(Node *root)
{
    if (!root)
    {
        return;
    }
    if (root->right)
    {
        cout << root->data << " ";
        printRightNode(root->right);
    }
}
void boundaryOrder(Node *root)
{
    if (!root)
        return;

    cout << root->data << " ";
    printLeftNode(root->left);
    printLeafNode(root);
    printRightNode(root->right);
}
int main(int argc, char const *argv[])
{
 
    Node *root = new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    cout << "\n Boundary Travesal : " << endl;
    boundaryOrder(root);
    return 0;
}
