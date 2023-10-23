#include "bits/stdc++.h"
using namespace std;

class Node{
    public:
    int data;
    Node *left ,*right;
    Node (int val){
        data=val;
        left=right=NULL;
    }
};
int solve(Node *root,int &maxSubTree){
    if(root==NULL){
        return 0;
    }
    int currSum=root->data+solve(root->left,maxSubTree)+solve(root->right,maxSubTree);
    maxSubTree=max(maxSubTree,currSum);
    return currSum;
}
int longestSubTree (Node *root){
     if(root==NULL){
        return 0;
    }
  int ans=INT_MIN;
  solve(root,ans);
  return ans;
}
int main (){
     Node* root = new Node(1);
    root->left = new Node(-2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(-6);
    root->right->right = new Node(2);
    cout <<longestSubTree(root)<<" ";
}