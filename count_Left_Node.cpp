#include<bits/stdc++.h>
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
int Left_height(Node *root,int *height){
    if(root==NULL){
        height=0;
        return 0;
    }
    int Lh=0;
    int countLeft=Left_height(root->left,&Lh);
    *height=max(countLeft,Lh)+1;
    return countLeft;
}
int main(){
    int height=0;
    
    Node *root=new Node(1);
    
    root->left=new Node(2);
    
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    
    root->left->right=new Node(7);
    
    root->right->left=new Node(9);
    
    root->right->right=new Node(5);
    
    root->right->left->left=new Node(6);
    
    root->right->left->right=new Node(8);
    
    
}