#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;

    Node *left;

    Node *right ;
    
    Node(int val){
        data=val;

        left=NULL;

        right =NULL;
    }
};
void Sort_BST(Node *root){
    if(root==NULL)
        return ;

    Sort_BST(root->right);

    cout<< root->data<<" ";

    Sort_BST (root->left);

}
int main(){
    Node *root=new Node(8);

    root->left=new Node(5);

    root->right=new Node(10);

    root->left->left=new Node(4);

    root->left->right=new Node(6);

    root->right->left=new Node(9);

    root->right->right=new Node(12);
 
    Sort_BST(root);
   return 0;
}