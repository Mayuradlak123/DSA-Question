#include<bits/stdc++.h>
using namespace std;
class Node {
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
vector<int> revrser_order(Node *root){
    if(root==NULL){

    }
    vector<int>v;
     queue<Node *>q;
     q.push(root);
     while(q.empty()==false){
        Node *child=q.front();
        v.push_back(child->data);
        q.pop();
        if(child->left!=NULL){
            q.push(child->left);
        }
        if(child->right!=NULL){
              q.push(child->right);
         }
}
return v;
}

int main(){
   Node *root =new Node(1);
   root->left=new Node(2);
     root->right=new Node(3);
    //  root->left->right=new Node(5);
    //  root->left->left=new Node(4);
    //  root->right->left=new Node(6); 
    //  root->right->right=new Node(7);
vector<int>v=revrser_order(root);
for (int i=0; i<v.size(); i++){
    cout << v[i] <<" ";
}
return 0;
}