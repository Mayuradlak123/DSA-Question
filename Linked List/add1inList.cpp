#include <bits/stdc++.h>
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
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter Element of List : " << endl;

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
    cout << "NULL";
}
int add1InList(Node *head)
{
    Node *curr = head;
    int n = 0;
    while (curr){
        n = (n * 10) + curr->data;
        curr = curr->next;
    }
    n=n+1;
    return n;
}
int main(int argc, char const *argv[])
{
    Node *head = getList();
    cout << "Linked List" << endl;
    cout << "Add 1 In Linked List : "<<add1InList(head) << endl;
    print(head);
    return 0;
}
