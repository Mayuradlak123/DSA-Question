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
void levelOrder(Node *root)
{
    if (!root)
    {
        return;
    }
    queue<Node *> Q;
    Q.push(root);
    while (!Q.empty())
    {
        Node *temp = Q.front();
        Q.pop();
        cout << temp->data << " ";
        if (temp->left)
        {
            Q.push(temp->left);
        }
        if (temp->right)
        {
            Q.push(temp->right);
        }
    }
}
bool ans = 1;
void solve(Node *root, int h, int &maxHeight)
{
    if (!root)
        return;
    if (ans==0)
        return;
    if (root->left == NULL and root->right == NULL)
    {
        if (maxHeight == -1)
        {
            maxHeight = h;
        }
        else
        {
            if (maxHeight != h)
            {
                ans = 0;
            }
        }
        return;
    }
   
    solve(root->left, h + 1, maxHeight);
    solve(root->right, h + 1, maxHeight);
}
bool Check(Node *root)
{
    int h = 0, maxHeight = -1;
    ans = 1;
    solve(root, h, maxHeight);
    return ans;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    // root->right->right=new Node(56);
    root->right->right = new Node(7);
    // cout << "Level Order Traversal of Tree :" << endl;
    if(Check(root)){
        cout <<"All Leaf Node are on same level"<<endl;
    }
    else{
        cout <<"Not all Leaf Node are on same level"<<endl;
    }
    return 0;
}