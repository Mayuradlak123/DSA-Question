#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;

    Node *left;

    Node *right;

    Node(int val)
    {
        data = val;

        left = NULL;

        right = NULL;
    }
};
void inorder(Node *root)
{
    if(root==NULL){
        return ;
    }
    inorder(root->left);

    cout << root->data << " ";
 inorder(root->right);
   
}
int main()
{

    Node *root = new Node(8);

    root->left = new Node(10);

    root->right = new Node(5);

    root->left->left = new Node(14);

    root->left->right = new Node(9);

    root->right->right = new Node(4);

    root->right->left = new Node(6);

    inorder(root);
    return 0;
}