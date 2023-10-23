#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/remove-nth-node-from-end-of-list

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }
};
Node *getList()
{
    int i, n, temp;

    cout << "Enter size of list: " << endl;
    cin >> n;

    Node *head = nullptr, *tail = nullptr;

    cout << "Enter list element : " << endl;
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

void print(Node *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "nullptr" << endl;
}
void deleteNthEndNode(Node *&head, int k)
{
    Node *temp = head;
    Node *prev = head;
    Node *curr = head;
    int n = 0, i;
    while (temp)
    {
        temp = temp->next;
        n++;
    }

    for (i = 0; i < n - k; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
}

int main(int argc, char const *argv[])
{
    Node *head = getList();
    int k;
    cout << "Enter k :" << endl;
    cin >> k;
    deleteNthEndNode(head, k);
    cout << "\nLinked List : " << endl;
    print(head);
    free(head);
    return 0;
}
