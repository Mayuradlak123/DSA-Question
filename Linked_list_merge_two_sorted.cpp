#include <bits/stdc++.h>
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
Node *Input_list()
{
    int i, n, h, temp;

    cout << "Enter size of Linked List : " << endl;
    cin >> n;

    cout << "Enter value of head : " << endl;
    cin >> h;

    Node *head = NULL;
    Node *tail = NULL;
    head = new Node(h);

    tail = head;
    cout << "Enter element of list :" << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    return head;
}
Node *merge_list(Node *first, Node *second)
{
    if (first == NULL){
        return second;
    }
    if (second == NULL){
        return first;
    }
    if (first->data > second->data){
        swap(first, second);
    }
    Node *temp = first;

    while (first != NULL and second != NULL)
    {
        Node *current = NULL;
        while (first != NULL and first->data <= second->data)
        {
            current = first;
            first = first->next;
        }
        current->next = second;
        swap(first, second);
    }
    return temp;
}
void print(Node *pointer)
{
    while (pointer->next != NULL)
    {
        cout << pointer->data << " ";
        pointer = pointer->next;
    }
}
int main()
{
    Node *first = Input_list();
    Node *second = Input_list();
    Node *head = merge_list(first, second);
    cout << "Merge Two Linked List : "<<endl;
    print(head);
    return 0;
}