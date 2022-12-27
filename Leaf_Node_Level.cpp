// In this program if all leaf node are same level then return 1

// otherwise return 0;
// Let's see and create Binary tree program 
// 
#include <bits/stdc++.h>
using namespace std;
class Node
{
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
int ans=0;
void Solution(Node *root,int h,int &level){
     if(root==NULL){
         return ;
     }
     if(ans==0){
         return ;
     }
     if(!root->left and !root->right){
         if(level==-1){
             level=h;
         }
         else{
             if(h!=level){
                 ans=0;
             }
         }
         return;
     }
     Solution(root->right,h+1,level);
     Solution(root->left ,h+1,level);
}


bool check(Node *root){
    int level=-1;
    int h=0;
    ans=1;

    Solution(root,h,level);
    return ans;
}

int main()
{
     int level=-1 ;
    int h=0;
   // int ans=1;
       
    Node *root = new Node(17);

    root->left = new Node(12);

    root->right = new Node(3);

    root->right->left = new Node(6);

   root->right->right=new Node(5);
   
   root->right->right->left=new Node(33);
   
    root->left->left = new Node(7);
    
    root->left->right=new Node(4);
//
    // levelCheck(root, h, level);
    // check(root);
 cout<< check(root);
    Solution(root,h,level);

//     return 0;
}
