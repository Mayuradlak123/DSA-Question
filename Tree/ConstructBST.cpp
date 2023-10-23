#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
Node *constructTree(vector<int> arr, int i, int n)
{
    if (n == 0)
        return nullptr;
    Node *root=nullptr;
    if(i<n){
        root=new Node(arr[i]);
        root->left=constructTree(arr,2*i+1,n);
        root->right=constructTree(arr,2*i+2,n);
    }
    return root;
}
void traversal (Node *root){
    if(!root) return ;

    queue<Node *> que;
    que.push(root);

    while(!que.empty()){
        Node *top=que.front();
        que.pop();
        cout <<top->data<<" ";
        if(top->left){
            que.push(top->left);
        }
        if(top->right){
            que.push(top->right);
        }
    }

}
int main(int argc, char const *argv[])
{
    int i, n, temp;
    cout << "Enter size of array : " << endl;
    cin >> n;
    vector<int> arr;
    cout << "enter elements in the tree" << endl;
    for (i = 0; i < n; ++i)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    Node *root = constructTree(arr, 0, n);
    cout <<"Level Order Traversal : "<<endl;
    traversal(root);
    return 0;
}
