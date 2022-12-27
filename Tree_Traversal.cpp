#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;

    Node *left ;

    Node *right;

    Node (int val){

        data=val;

        left=NULL;

        right=NULL;

    }
};
int main(){
       Node *root =new Node(8);

     root->left=new Node(9);
 
     root->right=new Node(10);

     root->left->left=new Node(11);

     root->left->right=new Node(12);

     root->right->right=new Node(13);

     root->right->left=new Node(7);
     
     return 0;
     
}