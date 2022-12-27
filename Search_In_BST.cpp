#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;

    Node *left;

    Node *right;
    Node (int val){

        data=val;

        left=NULL;

        right=NULL;

    }
};
Node *Search_BST(Node *root,int key){
    if(root==NULL){
        return NULL;
    }
    
    if(root->data==key){
        return root;
    }
    
    if(root->data <key){
        return Search_BST(root->right,key);
    }
    else{
        return Search_BST(root->left,key);
    }
}
int main(){

    Node *root=new Node( 4);

    root->left=new Node(2);

    root->right=new Node(5);
    
    root->left->right=new Node(3);
    
    root->left->left=new Node(1);
    
    root->right->right=new Node(8);

    
//   cout<<"Enter key for Search in BST: "<<endl;
//   int key;

//   cin>>key;

 if(Search_BST(root ,2)==NULL) {
     cout<<"Node does'nt Exist: "<<endl;
 }
 else{
     cout<< " Node is Exist: "<<endl;
 }
 return 0;

}