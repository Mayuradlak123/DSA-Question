#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    
    int data ;
    
    Node *left ;
    
    Node *right ;
    
    Node(int val){
        
        data=val;
        left=NULL;
        right=NULL;
    }
};

int sumofBST(Node *root){
    
     if(root==NULL){
         return 0;
     }
     
    return sumofBST(root->left)+sumofBST(root->right)+root->data;
}

int countNode(Node *root){
    
    if(root==NULL){
        return 0;
    }
    return countNode(root->left)+countNode(root->right)+1;
}
int main(){

Node *root=new Node(8);

    root->left=new Node(6);

    root->right =new Node(10);

    root->left->left =new Node(5);

    root->left->right=new Node(7);

    root->right->right=new Node(11);

    root->right->left=new Node(9);
    
    root->left->left->right=new Node(12);

    cout <<"Sum of all Nodes : "<<sumofBST(root)<<endl;
    
    cout << "Total Node in tree : "<<countNode(root)<<endl;
    
    return 0;
}