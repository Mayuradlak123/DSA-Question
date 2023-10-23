#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
Node *getList()
{
    int i, n, temp;
    cout << "Enter size of list : " << endl;
    cin >> n;
    Node *head = NULL, *tail = NULL;
    cout << "Enter list element: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        if (!head)
        {
            head = new Node(temp);
            tail = head;
        }
        else
        {
            tail->next = new Node(temp);
            tail = tail->next;
        }
    }
    return head;
}

void deleteLastNode(Node *&head)
{
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
}
void printList(Node *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "null" << endl;
}

int main(int argc, char const *argv[])
{
    Node *head = getList();
    cout << "Linked List Before Deletion : " << endl;
    printList(head);
    cout<<"After Deletion: "<<endl;
    deleteLastNode(head);
    printList(head);
    return 0;
}
