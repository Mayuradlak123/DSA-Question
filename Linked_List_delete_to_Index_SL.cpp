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
    int i,h,temp,n;
    cout << "Enter size of Linked List : "<<endl;
    cin>>n;

    Node *head=NULL;
    Node *tail=NULL;
    cout << "Enter data of head: "<<endl;
    cin>>h;
    head=new Node(h);
    tail=head;
    cout << "Enter element of list : "<<endl;
    for (i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
    }
    return head;
}
void removeNode(Node *head){

    int index;
cout << "Give a Index for Delete Node: "<<endl;
cin>>index;

    if(index==1){
        head=head->next;
        // return head;
    }
    Node *temp=head;
    for (int i=0;i<index-1;i++){
        temp= temp->next;
    }
    temp->next=temp->next->next;
    // return head;
}
void print(Node *head){
    while(head!=NULL){
        cout << head->data<<" ";
        head=head->next;
    }
}
int main(){
Node *head=getNode();
removeNode(head);
removeNode(head);
cout << "Element of List : "<<endl;

print(head);
}
//Refector 
/*#include <iostream>
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
Node *Insertion()
{
    int i, n, h, temp;
    cout << "Enter size of List : " << endl;
    cin >> n;

    cout << "Enter value of head: " << endl;
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
Node *delete_to_index(Node *head, int index)
{
    if (index == 1)
    {
        head = head->next;
        return head;
    }
    Node *temp = head;
    for (int j = 1; j < index - 1; j++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
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
    Node *head = Insertion();
    puts("Before Deletion List ");
    print(head);
    int index;
    cout <<endl;
    cout << "Enter Index for delete Node : " << endl;
    cin >> index;

    Node *del = delete_to_index(head, index);
    print(del);

    return 0;
}*/
