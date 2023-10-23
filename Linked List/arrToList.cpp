#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    Node *next;
    int data;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
Node *getList()
{
    int i, temp, n;
    cout << "Enter size of List " << endl;
    cin >> n;
    int arr[n];

    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter Element of Array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    head = new Node(arr[0]);
    tail = head;
    for (i = 1; i < n; i++)
    {
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }
    return head;
}
void print(Node *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "null";
}

int main(int argc, char const *argv[])
{
    Node *head = getList();
    cout << "Linked List: " << endl;
    print(head);
    return 0;
}
