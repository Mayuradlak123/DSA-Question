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
void Ireorder(Node *root){
   if(root==NULL){
    return ;
   }
   
   Ireorder(root->left);
   cout << root->data<<" ";
   Ireorder(root->right);
}
int main(){
    cout << "Inorder Traversal of Binary Tree" << endl;
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    root->left->left=new Node(4);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    Ireorder(root);
    return 0;
}
