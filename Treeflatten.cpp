 #include <bits/stdc++.h>
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
void flatten(Node *root){
    if(root==NULL and root->left==NULL and root->right==NULL){
        return ;
    }
    if(root->left!=NULL){
     flatten(root->left);
     Node *temp =root->right;
     root->right=root->left;
     root->left=NULL;
     Node *t=root->right;
     while(t!=NULL){
       t=t->right;
     }
     t->right=temp;
    }
    flatten(root->right);
}

void Inorder(Node *root){
   if(root==NULL){
    return ;
   }
   
   Inorder(root->left);
   cout << root->data<<" ";
   Inorder(root->right);
}
int main(){
 Node *root=new Node(4);
    root->left=new Node(9);
   root->right=new Node(5);
   root->left->left=new Node(1);
   root->left->right=new Node(3);
//    root->right->left=new Node();
   root->right->right=new Node(6);
   flatten(root);
   Inorder(root);
return 0;
}