#include "bits/stdc++.h"
using namespace std;
class Node{
    public:
   int data;
   Node *next;
   Node (int val){
    next=NULL;
    data=val;
   }
};
void Loop_here(Node *head,Node *tail,int pos){
    if(pos==0){
return;
    }
  Node *loop=head;
  for (int i=1; i<pos; i++){
    loop=loop->next;
    tail->next=loop;
  }
}

void print_Linked_List(Node *head){
    
    while(head!=NULL){
        cout <<head->data<<"->";
            head=head->next;
    }
    cout << "NULL "<<endl;
}
void starting_point(Node *head){
    Node *low=head;
    Node *high=head;
    while(low!=NULL and high!=NULL and high->next!=NULL){
        low =low->next;
        high=high->next->next;
    }
    if(low!=high){
        return ;
    }
    low=high;
    while (low!=high)
    {
        low=low->next;
        high=high->next;
    }
    cout<<low<<endl;
}
int main(){
    int i,h,temp,n,pos;
    cout << "Enter Number of Element : "<<endl;
    cin>>n;
    
    cout << "Enter value of head: "<<endl;
    cin>>h;
   
   cout << "Enter Position :"<<endl;
   cin>>pos;

    Node *head=NULL;
    Node *tail=NULL;
    head =new Node(h);
   tail=head;

   cout << "Enter Element of List : "<<endl;
   for (i=1; i<n; i++){
    cin>>temp;
    tail->next=new Node(temp);
    tail=tail->next;
   }
   Loop_here(head,tail,pos);
//   print_Linked_List(head);
  starting_point(head);
  return 0;
}
