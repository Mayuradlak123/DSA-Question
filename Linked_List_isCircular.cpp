#include "bits/stdc++.h"
using namespace std;
 class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
 };
 Node *Input_List(){
    int i,n,h,temp;
     
     cout << "Enter size of List:"<<endl;
     cin>>n;

     cout <<"Enter value  of Head :"<<endl;
     cin>>h;

     Node *head=NULL;
     Node *tail=NULL;

    head =new Node(h);
    tail=head;
    cout << "Enter Element of List :"<<endl;

    for (i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
    }
    tail->next=head;
    return head;
 }
 void print_List(Node *head){
   cout << "Element of Linked List : "<<endl;
while(head->next!=head){
    cout <<head->data<<"->";
   head=head->next;
}
 }
 bool isCircular(Node *head)
{
   // Your code here
   Node *temp=head;
   while(temp->next!=NULL)
   {
       if(temp->next==head){
            return 1;
       }
        temp=temp->next;
   }
   return 0;
}
 int main(){
    Node *head=Input_List();
   //  print_List(head);
    if(isCircular(head)){
      cout <<"Linked list is Circular : "<<endl;
    }
    else{
      cout << "Linked List is Not Circular : "<<endl;
    }
    return 0;
 }