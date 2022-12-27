#include <iostream>
#include <vector>
#include<queue>
using namespace std;
class Node {
    public:
    int data;
    Node *left,*right;
    Node (int val){
    data=val;
    left=NULL,right=NULL;
    }
};
vector<int> levelOrderTraversal(Node *root){
     
     vector<int>ans;
     queue<Node*> q;
     q.push(root);
     while (q.empty()==false){
           Node *node=q.front();
           q.pop();
           ans.push_back(node->data);
           if(node->left!=NULL){
            q.push(node->left);
           }
           if(node->right!=NULL){
            q.push(node->right);
           }
     } 
     return ans;    
}
int main(){
    Node *root=new Node(12);
    root->left=new  Node(11);
    root->right=new Node(13);
    root->left->right=new Node(14);
     root->left->left=new Node(10);
      root->right->left=new Node(9);
       root->right->right=new Node(15);
   vector<int>ans= levelOrderTraversal(root);
   cout << "Level Order Traversal of BST is : "<<endl;
   for (auto i:ans){
    cout <<i<< " ";
   }
       return 0;
}



/*#include <bits/stdc++.h>
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
vector<int> level_Traversal(Node *root){
    // Base Case
    if (root == NULL){
        // return;
    }
    vector<int> v;
    
    queue<Node*> q;
    q.push(root);
 
    while (q.empty() == false) {
   
        Node* node = q.front();
        
        v.push_back(node->data);
        q.pop();
        if (node->left != NULL){
            q.push(node->left);
        }
        
        if (node->right != NULL){
            q.push(node->right);
        }
    }
    return v;
}

int main(){
    Node *root =new Node(1);
     root->left=new Node(2);
     root->right=new Node(3);
     root->left->right=new Node(5);
     root->left->left=new Node(4);
     root->right->left=new Node(6); 
     root->right->right=new Node(7);

    vector<int> v= level_Traversal(root);
    int i;
    cout << "Reverse Level Order Traversal : "<<endl;
    for (auto i:v){
        cout << i <<" ";
    }
     return 0;
}*/