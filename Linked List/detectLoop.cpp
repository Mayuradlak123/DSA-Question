#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/linked-list-cycle/
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
void makeLoop(Node *head, Node *tail)
{
    int k,j;
    cout << "Enter position where you want to make loop :" << endl;
    cin >> k;
    Node *temp = head;
    for ( j = 0; j < k; j++)
    {
        temp = temp->next;
    }
    tail->next = temp;
    
}
Node *getList()
{
    int i, n, temp;
    cout << "Enter size of list : " << endl;
    cin >> n;
    Node *head = NULL, *tail = NULL;
    cout << "Enter list element: " << endl;
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
    // makeLoop(head,tail);
    return head;
}

void printList(Node *head)
{
    Node *curr=head;
    while (curr)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "null" << endl;
}
bool isLoop(Node *head)
{
    Node *fast = head;
    Node *slow = head;
  
    while (slow && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
int main(int argc, char const *argv[])
{
  Node *head=getList();
  cout <<"Linked List : "<<endl;
//   printList(head);
  if(isLoop(head)){
    cout <<"\nLoop is Present in LinkedList: "<<endl;
  }
  else{
    cout <<"Loop Not Present in LinkedList: "<<endl;
  }
    return 0;
}
