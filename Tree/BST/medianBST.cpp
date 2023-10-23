#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *constructBST(int start, int end, int *arr)
{
    if (start > end)
    {
        return nullptr;
    }
    int mid = (start + end) / 2;
    Node *root = new Node(arr[mid]);
    root->left = constructBST(start, mid - 1, arr);
    root->right = constructBST(mid + 1, end, arr);
    return root;
}
vector<int>v;
void Inorder(Node *root){
    if(root==NULL){ return;}
     Inorder(root->left);
   v.push_back(root->data);
    Inorder(root->right);
}

int getMedian (Node *root){
    int lenght=v.size();
     return v[lenght/2]%2==0?((v[lenght/2]-1)+v[lenght/2])/2:v[lenght/2];
}
int main()
{
    int n, i;
    cout << " Enter size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << " Enter element of array in sorted order: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Node *root=constructBST(0,n-1,arr);
    Inorder(root);
    int median =getMedian(root);
    cout <<"Median of BST is : "<<median<<endl;
    return 0;
}