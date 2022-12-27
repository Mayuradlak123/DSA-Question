#include "iostream"
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void Preorder(Node *root){
   if(root==NULL){
    return ;
   }
   cout << root->data<<" ";
   Preorder(root->left);
   Preorder(root->right);
}
int main(){
    cout << "Preorder Traversal of Binary Tree" << endl;
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    root->left->left=new Node(4);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    Preorder(root);
    return 0;
}
