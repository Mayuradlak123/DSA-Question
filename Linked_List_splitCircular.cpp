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
Node *input_List(int n)
{
    int i, h, temp;
    cout << "Enter value of head List :" << endl;
    cin >> h;

    Node *head = NULL;
    Node *tail = NULL;

    head = new Node(h);
    tail = head;

    cout << "Enter Element of List: " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    return head;
}
void print_List(Node *head, int n)
{
    int j = 0;
    while (head)
    {
        if (j == ceil(n / 2))
        {
            cout << endl;
        }
        cout << head->data << "->";
        head = head->next;
        j++;
    }
}
int main()
{
    int n, m;
    cout << "Enter size of First Linked List :" << endl;
    cin >> n;

    Node *first = input_List(n);
    cout << " Split into half Representation of Linked List : " << endl;

    print_List(first, n);
    return 0;
}