#include <iostream>
#include<stdio.h>
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

Node *Input()
{
    int i, h, n, temp;

    cout << "Enter size of List : " << endl;
    cin >> n;
    cout << "Enter value of head : " << endl;
    cin >> h;
    Node *head = NULL;
    Node *tail = NULL;
    head = new Node(h);
    tail = head;
    cout << "Enter Element of List : " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    return head;
}
Node *Rotaion(Node *head, int k)
{
    Node *first = head;
    Node *last = head;
    Node *kth = head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = first;
    while (k > 1)
    {
        kth = kth->next;
        k--;
    }
    head = kth->next;
    kth->next = NULL;
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    int k;
    Node *head = Input();
    puts("Before Rotaion Linked List ");
    print(head);
    cout << "\nEnter Number of Rotation : " << endl;
    cin >> k;
   
    Node *inter = Rotaion(head, k);

    printf("Linked List After Rotaion ");
    print(inter);
    return 0;
}