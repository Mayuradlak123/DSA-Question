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
    cout << "Enter size of Linked List :" << endl;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
    cout <<"Enter element of List : "<<endl;
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
Node * getSum(Node *head1, Node *head2)
{
    Node *curr1 = head1;
    Node *curr2 = head2;
    int sum1 = 0, sum2 = 0;
    while (curr1)
    {
        sum1 = (sum1 * 10) + (curr1->data);
        curr1 = curr1->next;
    }
    while (curr2)
    {
        sum2 = (sum2 * 10) + (curr2->data);
        curr2 = curr2->next;
    }
    int sum=sum1+sum2;
    Node *dummy=new Node(0);
    Node *temp=dummy;
    while(sum){
        temp->next=new Node(sum%10);
        temp=temp->next;
        sum/=10;
    }
    return dummy->next;
}
void print(Node *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL"<<endl;
}

int main(int argc, char const *argv[])
{
    Node *head1 = getList();
    Node *head2 = getList();
    
    Node *ptr=getSum(head1,head2);
     cout <<"Sum of Linked List : "<<endl;
     print(ptr);
    cout << "Iteration of Linked List 01 : " << endl;
    print(head1);
    
    cout << "Iteration of Linked List 02 : " << endl;
    print(head2);
    
    return 0;
}
