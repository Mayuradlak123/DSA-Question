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
Node *getInput(){
  int i,n,temp,h;
  cout << "Enter Size of list : "<<endl;
  cin>>n;
  Node *head=NULL,*tail=NULL;
  cout << "Enter value of head Node : "<<endl;
  cin>>h;
  head=new Node(h);
  tail=head;
  cout << "Enter Element of List : "<<endl;
  for (i=1; i<n; i++ ){
     cin>>temp;
     tail->next=new Node (temp);
     tail =tail->next;
  }
 return head;
}
void Insert(Node *&head){
  int k;
 cout << "Enter element for Insertion: "<<endl;
 cin>>k;
 Node *temp=new Node(k);
 temp->next=head;
 head=temp;
}
void print(Node *head){
  while(head){
    cout <<head->data<<" "  ;
    head=head->next;
    }

}
int  main (){
   Node *head =getInput();
   Insert(head);

   cout << "All Element of List : "<<endl;
   print(head);
   Insert(head);
   print(head);
   return 0;
}