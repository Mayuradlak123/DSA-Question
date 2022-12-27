#include "bits/stdc++.h"
using namespace std;
class Node{
 public:
 int data;
Node *next;
Node (int val){
    data=val;
    next=NULL;
}
};
void Middle_Element(Node *head){
    int i,j=0;
    while(head!=NULL){
    head=head->next;
    i++;
    }
    while(head!=NULL){
     if(j==ceil(i/2)){
      cout <<head->data<<" ";
     }
     head=head->next;
     j++;
    }
}
int main(){
  int i,n,h,temp;
  cout << "Enter Size of Linked List: "<<endl;
  cin>>n;

Node *head=NULL;
  Node *tail=NULL;
  
  cout << "Enter Element of head : "<<endl;
  cin>>h;
   head =new Node(h);
   cout << "Enter Element of List : "<<endl;
   for (i=0; i<n; i++){
    cin>>temp;
    tail->next=new Node(temp);
    tail=tail->next;
   }
   Middle_Element(head);
   return 0;
}