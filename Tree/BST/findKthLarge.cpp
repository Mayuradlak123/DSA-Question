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
        left = nullptr, right = nullptr;
    }
};
void solve (Node *root,int &k,int &ans){
   if (root==nullptr)return ;
  solve(root->right,k,ans);
  k--;
  if(k==0){
    ans=root->data;
    return;
  }
  solve (root->left,k,ans);
}
int kthSmall(Node *root, int k)
{
    if (root == nullptr)
        return -1;
    int ans=INT_MIN;
    solve (root,k,ans);
    return ans;
}
int main()
{
    Node *root = new Node(13);
    root->left = new Node(11);
    root->right = new Node(16);
    root->left->left = new Node(9);
    root->left->right = new Node(12);
    root->right->left = new Node(15);
    root->right->right = new Node(18);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(10);
    root->right->right->left = new Node(17);
    root->right->right->right = new Node(19);
    int k;
    cout << " Enter value of k : " << endl;
    cin >> k;
    int ans = kthSmall(root, k);
    ans == -1 ? cout << "Not Found " : cout << "K th Largest element in BST :" << ans << endl;

    return 0;
}