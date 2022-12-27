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
void Left_View(Node *root){

    if(root==NULL){
        return ;
    }
    
    cout << root->data<<" ";

    Left_View(root->left);

}
int main(){
    
    Node *root=new Node(10);
   
   root->left=new Node(20);

   root->right=new Node(30);
   
   root->left->left=new Node(40);
   
   root->left->right=new Node(50);
   
//      root->right->left=new Node(4);
   
//    root->right->right=new Node(5);
   
   Left_View(root);
   
return 0;

}