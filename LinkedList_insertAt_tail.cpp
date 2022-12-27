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
Node *getNode(){
   
 int i,h,temp,n;
    cout << "Enter number of Element : "<<endl;
    cin>>n;
    
    cout << "Enter Element of head : "<<endl;
    cin>>h;
    
    Node *tail=NULL;
    Node *head=NULL;
    head =new Node(h);
    tail=head;
    
    cout << "Enter Element of Linked list : "<<endl;
    for (i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
    }
   return head;
}
void InsertEnd(Node *head){
    
    int x;
    cout << "Enter Element for Insertion : "<<endl;
    cin>>x;
    if(head==NULL){
        head=new Node(x);
    }
   Node *temp = new Node(x);   
  temp->next = NULL;

  while(head->next !=NULL){
    head=head->next;
  }
  head->next=temp;
}
void printList(Node *head){
    cout << "After Insert at End : "<<endl;
    while(head){
        cout <<head->data<<" ";
        head=head->next;
    }
}
int main(){
   Node *head=getNode();     
   InsertEnd(head);
printList(head);    
    return 0;
}