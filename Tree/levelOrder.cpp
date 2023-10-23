#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/binary-tree-level-order-traversal/
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        left = right = NULL;
        data = val;
    }
};

vector<int> traversal(Node *root)
{
    vector<int> ans;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
 
        ans.push_back(curr->data);
        if (curr->left)
        {
            q.push(curr->left);
        }
        if (curr->right)
        {
            q.push(curr->right);
        }
    }
    return ans;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    vector<int> v = traversal(root);
    cout << "Level Order Traversal " << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}