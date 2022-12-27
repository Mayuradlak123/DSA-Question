#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data ;

    Node * left;

    Node *right;

    Node (int val){
        data=val;

        left=NULL;

        right=NULL;

    }
};
int Sum_Node(Node *root){
    if(root==NULL){
        return 0;
    }

return Sum_Node(root->left)+Sum_Node(root->right)+root->data;
    
}
int main(){
    Node *root=new Node(10);

    root->left=new Node(9);

    root->right=new Node(11);

    root->right->left=new Node(8);

    root->right->right=new Node(12);

    root->left->left=new Node(7);

    root->left->right=new Node(13);

    cout<< "Sum of all node is : "<<Sum_Node(root);
   
   return 0;
}