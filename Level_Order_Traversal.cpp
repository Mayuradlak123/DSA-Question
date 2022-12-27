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
void  Level_order(Node *root){
 / Base Case
    if (root == NULL)
        return;
 
    // Create an empty queue for level order traversal
    queue<Node*> q;
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false) {
        // Print front of queue and remove it from queue
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();
 
        /* Enqueue left child */
        if (node->left != NULL)
            q.push(node->left);
 
        /*Enqueue right child */
        if (node->right != NULL)
            q.push(node->right);
    }
}
int32_t main(){
    
    Node *root=new Node(1);

    root->left=new Node(2);

    root->right=new Node(3);

    root->right->left=new Node(6);

    root->right->right=new Node(7);

    root->left->left=new Node(4);

    root->left->right=new Node(3);

    Level_order(root);
   
   return 0;
}