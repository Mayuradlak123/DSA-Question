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
    int n, i, temp;
    cout << "Enter size of list : " << endl;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
    cout << "enter Element of array : " << endl;

    for (i = 1; i <= n; i++)
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
void printlist(Node *head)
{
    while (head)
    {
        cout << head->data << " ->";
        head = head->next;
    }
    cout << "NULL\n"
         << endl;
}
void deleteFrontNode(Node *&head)
{
    Node *front = head;
    head = front->next;
    delete front;
}

int main(int argc, char const *argv[])
{
    Node *head = getList();
    cout << "Liste Before Delete Front Node : " << endl;
    printlist(head);

    cout << "List After Deletion : " << endl;
    
    deleteFrontNode(head);
        
    printlist(head);
    return 0;
}
