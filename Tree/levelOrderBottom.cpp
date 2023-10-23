#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
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

vector<vector<int>> levelOrderBottom(Node *root)
{
    vector<vector<int>> ans;
    queue<Node *> q;
    if (root == NULL)
    {
        return ans;
    }
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            Node *temp = q.front();
            q.pop();
            v.push_back(temp->data);
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        ans.push_back(v);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(int argc, char const *argv[])
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left = new Node(7);
    vector<vector<int>> ans = levelOrderBottom(root);
    cout << "Bottom level order traversal: " << endl;
    for (auto x : ans)
    {
        cout << "[";
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << "], ";
    }

    return 0;
}
