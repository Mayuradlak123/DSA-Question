#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    Node *left, *right;
    int data;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
vector<int> reverseLevel(Node *root)
{
    queue<Node *> s;
    vector<int> ans;
    s.push(root);
    while (!s.empty())
    {
        Node *curr = s.front();
        s.pop();
        ans.push_back(curr->data);
        if (curr->left)
        {
            s.push(curr->left);
        }
        if (curr->right)
        {
            s.push(curr->right);
        }
    }
    reverse(ans.begin(), ans.end());
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
    vector<int> v = reverseLevel(root);
    cout << "Level Order Traversal " << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
       
    // Free memory
    free(root);
    return 0;
}