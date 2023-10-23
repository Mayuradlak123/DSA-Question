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
Node *getList()
{
   int n, i, temp;
   cout << "Enter n: " << endl;
   cin >> n;
   Node *head = NULL, *tail = NULL;

   cout << "Enter element of list:" << endl;
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

Node *rightMost(Node *head)
{
   if (!head->next)
   {
      return head;
   }
   head->next = rightMost(head->next);
   if (head->data > head->next->data)
   {
      return head->next;
   }
   else
   {
      return head;
   }
}
void printList(Node *head)
{
   while (head)
   {
      cout << head->data << "->";
      head = head->next;
   }
   cout << "null" << endl;
}
int main(int argc, char const *argv[])
{
   Node * head=getList();
   Node *ans=rightMost(head);
   cout <<"Linked List : "<<endl;
   printList(ans);
   return 0;
}
