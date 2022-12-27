#include "bits/stdc++.h"
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node (int val){
        data=val;
        next=NULL;
    }
};
Node *getNode(){
    int i,n,h,temp;
    cout << "Enter size of Linked List : "<<endl;
    cin>>n;
    Node *head=NULL,*tail=NULL;
    cout << "Enter value of head Node : "<<endl;
    cin>>h;
    head=new Node(h);
tail=head;
cout <<"Enter Element of list : "<<endl;
for (i=1; i<n; i++){
    cin>>temp;
    tail->next=new Node(temp);
    tail=tail->next;
}
return head;
}
Node *reverseList(Node *head){
    Node *curr=head,*prev=NULL;
   while(curr){
    Node *temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
   }
   return prev;
}
void printList(Node *head){
    cout << "Travarsal of Linked List Before reverse: "<<endl;
    while(head){
        cout << head->data<<" ";
        head=head->next;
    }
}
int main (){
   Node *head=getNode();

   printList(head);
   Node *prev=reverseList(head);
   cout << "Reverse Linked List : "<<endl;
   printList(prev);
   return 0;
}


/*#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
Node *getInput()
{
    int i, n, h, temp;
    cout << "Enter Size of List : " << endl;
    cin >> n;

    cout << "Enter value of head for link node " << endl;
    cin >> h;
    Node *head = NULL;
    Node *tail = NULL;
    head = new Node(h);
    tail = head;
    cout << "Enter Element of list : " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    return head;
}
Node *reverse(Node *head)
{
    Node *curr=head;
    Node *prev=NULL;
    while(curr){
        Node *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
void printList(Node *head)
{
    cout << "Reverse Linked List : " << endl;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = getInput();
    Node *rev = reverse(head);
    printList(rev);
}
*/
