#include "bits/stdc++.h"
using namespace std;
class Node {
  public:
  int data;
  Node *next;
  Node(int val){
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
void insertAtBegin(Node *&head){
  int k;
  cout << "Enter node for insertion : "<<endl;
  cin>>k;
  Node *temp=new Node(k);
  temp->next=head;
  head=temp;
}
void printList(Node *head){
    while(head){
      cout << head->data<<" ";
      head=head->next;
    }
}
int main (){
   Node *head=getNode();
   insertAtBegin(head);
    insertAtBegin(head);
printList(head);
return 0;
}
/*#include "bits/stdc++.h"
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
Node *getNode()
{
  int i, n, h, temp;

  cout << "Enter Number of element : " << endl;
  cin >> n;

  cout << "Enter value of head : " << endl;
  cin >> h;

  Node *head = NULL;
  Node *tail = NULL;

  head = new Node(h);
  tail = head;

  cout << "Enter Element of List: " << endl;
  for (i = 1; i < n; i++)
  {
    cin >> temp;
    tail->next = new Node(temp);
    tail = tail->next;
  }
  return head;
}
void Insert_at_Begin(Node *head)
{
  int x;
  cout << "Enter value for insert at begin" << endl;
  cin>>x;
  
  Node *temp = new Node(x);
  temp->next = head->next;
  head->next=temp;
  swap(head->data,head->next->data);
}
void printList(Node *head1)
{
  cout << "List After Insertion : " << endl;
  while (head1 != NULL)
  {
    cout << head1->data << "->";
    head1 = head1->next;
  }
  cout << "NULL"<< endl;
}
int main()
{
  Node *head = getNode();
   Insert_at_Begin(head);
   Insert_at_Begin(head);
  printList(head);
  return 0;
}*/