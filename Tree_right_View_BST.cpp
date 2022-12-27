#include<bits/stdc++.h>
using namespace std;
class Node {
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
void Right_View(Node *root){

    if(root==NULL){
        return ;
    }
    
    cout << root->data<<" ";

    Right_View(root->right);

}
int main(){
    
    Node *root=new Node(8);
   
   root->left=new Node(6);

   root->right=new Node(12);
   
   root->left->left=new Node(4);
   
   root->left->right=new Node(7);
   
     root->right->left=new Node(9);
   
   root->right->right=new Node(14);
   
   Right_View(root);
   
return 0;

}