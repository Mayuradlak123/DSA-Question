#include "bits/stdc++.h"
using namespace std;
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
Node *getList()
{
    int n, i, Head, temp;
    cout << "Enter size of list : " << endl;
    cin >> n;
    cout << " Enter value of head Node : " << endl;
    cin >> Head;
    Node *head, *tail;
    head = new Node(Head);
    tail = head;
    cout << "Enter list element : " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
        tail->prev = tail;
    }
    return head;
}
int countTripleSum(int n, Node *head)
{
    Node *ptr1, *ptr2, *ptr3;
    int count = 0;
    for (ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next)
    {
        for (ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next)
        {
            for (ptr3 = ptr2->next; ptr3 != NULL; ptr3 = ptr3->next)
            {
                if ((ptr1->data) + (ptr2->data) + (ptr3->data) == n)
                {
                    cout <<ptr1->data<<" "<<ptr2->data<<" "<<ptr3->data<<" "<<endl;
                    count++;
                }
            }
        }
    }
    return count;
}
int main()
{
    Node *head = getList();
    int k;
    cout << "Enter sum target: " << endl;
    cin >> k;
    printf("Found %d Triple sum combination : ", countTripleSum(k, head));
    return 0;
}