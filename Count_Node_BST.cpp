#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int countNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return countNode(root->left) + countNode(root->right) + 1;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right=new Node(5);
     root->left->left=new Node(4);
     root->right->left=new Node(6); 
     root->right->right=new Node(7);

    cout << "Number of Node : " << countNode(root) << endl;
    return 0;
}

/*#include<bits/stdc++.h>
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
int CountNode(Node *root){
    if(root==NULL){
        return 0;
    }


return CountNode(root->left)+CountNode(root->right)+1;

}
int main(){
    Node *root=new Node(10);

    root->left=new Node(9);

    root->right=new Node(11);

    root->right->left=new Node(9);

    root->right->right=new Node(12);

    root->left->left=new Node(8);

    root->left->right=new Node(13);


    cout<< "Count of all node is : "<<CountNode(root);

   return 0;
}*/