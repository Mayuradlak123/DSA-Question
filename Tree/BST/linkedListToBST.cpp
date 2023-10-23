#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/
vector<int> arr;
class Node
{
public:
    int data;

    Node *left, *right;
    Node(int value)
    {
        this->data = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};
class List
{
public:
    int data;
    List *next;
    List(int val)
    {
        data = val;
        next = nullptr;
    }
};
List *getList()
{
    int n, temp, i;

    cout << "Enter size of Linked List: " << endl;
    cin >> n;

    List *head = nullptr, *tail = nullptr;
    cout << "Enter Element of Linked List in sorted order : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        if (!head)
        {
            head = new List(temp);
            tail = head;
        }
        else
        {
            tail->next = new List(temp);
            tail = tail->next;
        }
    }
    return head;
}
Node *constructBST(int start, int end)
{
    if (start > end)
    {
        return nullptr;
    }
    int mid = (start + end) / 2;
    Node *root = new Node(arr[mid]);
    root->left = constructBST(start, mid - 1);
    root->right = constructBST(mid + 1, end);
    return root;
}
Node *linkedListToTree(List *head)
{
    if (!head)
    {
        return nullptr;
    }
    while (head)
    {
        arr.push_back(head->data);
        head = head->next;
    }
    Node *root = constructBST(0, arr.size() - 1);
    return root;
}
void Inorder(Node *root)
{

    if (!root)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void printList(List *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
}
int main(int argc, char const *argv[])
{
    List *head = getList();
    //    printList(head);
    cout << head->data << endl;
    Node *root = linkedListToTree(head);
    cout << "Inorder traversal: " << endl;
    Inorder(root);
    free(head);
    free(root);
    return 0;
}
