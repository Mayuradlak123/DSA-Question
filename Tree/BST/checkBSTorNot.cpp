#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/validate-binary-search-tree/
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
void solve(vector<int> v, Node *root)
{
    if(root==nullptr) return;
    solve(v, root->left);
    v.push_back(root->data);
    solve(v, root->right);
}
bool isBST(Node *root)
{
    vector<int> v;
    solve(v, root);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    Node *root = new Node(4);
    root->left = new Node(1);
    root->right = new Node(3);  

    isBST(root)?cout <<"Give Tree is BST"<<endl:cout <<"Given Tree is Not BST";
    return 0;
}