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
    int i, n, temp;
    cout << "\nEnter the number of nodes in linked list : ";
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
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
int countPairSum(Node *head, int k)
{
    Node *itr1;
    Node *curr = head;

    Node *temp = head;
    int n = 0, count = 0;
    unordered_set<int> s;
    while (curr)
    {
        if (s.find(k - curr->data) != s.end())
        {
            count++;
        }
        s.insert(curr->data);
        curr = curr->next;
    }
    return count;
}
void printList(Node *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
}

int main(int argc, char const *argv[])
{
    Node *head = getList();
    int k;
    cout << "Enter k : " << endl;
    cin >> k;
    printf("Found %d Pair in List \n", countPairSum(head, k));
    cout <<"Itration of Linked List :"<<endl;
    printList(head);
    return 0;
}
