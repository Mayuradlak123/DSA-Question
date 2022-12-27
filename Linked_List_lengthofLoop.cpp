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
void loopHere(Node *head, Node *tail, int pos)
{
    Node *walk = head;
    int i;
    for (i = 1; i < pos; i++)
    {
        walk = walk->next;
        tail->next = walk;
    }
}
int lenghtLoop(Node *head)
{
    Node *low = head;
    Node *high = head;
    int count = 0, ans = 1;
    while (high->next != NULL and high->next->next != NULL)
    {
        high = high->next->next;
        low = low->next;
        if (high == low)
        {
            low = low->next;
            count++;
            break;
        }
    }
    if (count)
    {
        while (high != low)
        {
            low = low->next;
            ans++;
        }
    }
    return ans;
}
void print(Node *head)
{
    cout << "All Element of Linked List : " << endl;
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}
int main()
{
    int i, h, n, temp;
    cout << "Enter size of List :" << endl;
    cin >> n;
    Node *head = NULL, *tail = NULL;
    cout << "Enter value of head Node: " << endl;
    cin >> h;
    head = tail = new Node(h);
    cout << "Enter Element of Linked List : " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    int x;
    cout << "Enter position for make loop : " << endl;
    cin >> x;

    //  print(head);
    loopHere(head, tail, x);
    cout << "Length of Loop : " << lenghtLoop(head) << endl;
    return 0;
}