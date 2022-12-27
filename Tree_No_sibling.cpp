#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;
    Node (int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void Solve(Node *root,vector<int>&ans){
    if(root==NULL){
         return ;
    }
    if(root->right and !root->left){
        ans.push_back(root->left->data);
    }
    if(root->left and !root->right){
        ans.push_back(root->right->data);
    }
    Solve(root->left,ans);
    Solve(root->right,ans);
}
vector<int> noSibling(Node *root){
    vector<int> ans;
    Solve(root,ans);

    if(ans.size()==0){
        ans.push_back(-1);
        return ans;
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    Node *root =new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right->right=new Node(4);
    root->left->left=new Node(5);
    root->right->left=new Node(6);
    root->right->right->left=new Node(7);
    
    vector<int> v=noSibling(root);
    cout <<"All Element Who have'nt Sibling: "<<endl;
    for (auto i:v){
        cout <<i<<" ";
    }
    return 0;
}