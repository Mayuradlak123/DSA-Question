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
bool is_Present(Node *root,int x){
      if(root==NULL){
        return false;
      }
     if(root->data==x){
        return true;
        break;
     }
     else{
        is_Present(root->left,x);
        is_Present(root->right,x);
     }
     return false;
}
int main(){
    Node *root=new Node(1);
    root->left=new Node(1);
    root->right=new Node(1);
    root->left->right=new Node(1);
    root->left->left=new Node(1);
    root->right->right=new Node(1);
    root->right->left=new Node(1);
    int x;
    cout << "Enter Node For Search : "<<endl;
    cin>>x;
    if(is_Present(root,x)){
        cout << "Node is Present in Tree "<<endl;
    }    
    else{
cout << "Not Found "<<endl;
    }
    return 0;
}
