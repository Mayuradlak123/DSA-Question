#include <bits/stdc++.h>
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
  int i,h,n, temp;
  cout << "Enter size of List : " << endl;
  cin>>n;
  cout << "Enter value of head : " << endl;
  cin>>h;
  Node *head = NULL;
  Node *tail = NULL;
  head=new Node(h);
  tail=head;
  cout <<"Enter Element of list : "<< endl;
  for(int i=1; i<n; i++) {
  cin>>temp;
  tail->next=new Node(temp);
  tail=tail->next;
  }
  return head;
}
middleInsertion(Node *head){
  int mid,count=0,i=1,k;
  cout <<"Enter Element for Insert : "<<endl;
cin>>k;

  Node *trav=head;
  while(trav!=NULL){
    trav=trav->next;
    count++;
  }
  if(count%2==0){
    mid=count/2;
  }
  else{
    mid=ceil(count+1/2);
  }
  Node *curr=head;
  while(i<mid){
    curr=curr->next;
    i++;
  }
  Node *temp=new Node(k);
  temp->next=curr->next;
  curr->next=temp;
 
}
void print(Node *head){
while(head!=NULL){
  cout <<head->data<<" ";
head=head->next;
}
}
int main(){
Node *head=getNode();
cout << "List of Element Before Insertion : "<<endl;
print(head);

cout <<endl;
middleInsertion(head);
// middleInsertion(head);
// middleInsertion(head);
print(head);
return 0;
}