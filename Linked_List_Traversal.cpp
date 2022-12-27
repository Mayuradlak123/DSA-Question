#include "bits/stdc++.h"
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void Print_Linked_List(Node *head)
{
    cout << "Element of Linked List: " << endl;
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    int n, temp, h, i;
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter size of Linked list : " << endl;
    cin >> n;
    cout << "Enter Value of Head: " << endl;
    cin >> h;
    head = new Node(h);
    tail = head;
    cout << "Enter Node of Linked list : " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    Print_Linked_List(head);
    cout << endl;
    return 0;
}