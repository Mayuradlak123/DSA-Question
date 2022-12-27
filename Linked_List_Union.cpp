#include "bits/stdc++.h"
using namespace std;
// This Code Is Working for Every test Case 
class Node {
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
Node *makeUnion(Node *head1,Node *head2){
    Node *head=new Node(-1);
    Node *temp=head;
       set<int> s;
       while(head1){
        s.insert(head1->data);
        head1=head1->next;
       }
       while(head2){
        s.insert(head2->data);
        head2=head2->next;
       }
   for (auto i=s.begin();i!=s.end();i++){
          Node *t=new Node(*i);
          temp->next= t;
          temp=t;
   }
   return head->next;
}
void printUnion(Node *head){
    cout << "Union of Both Linked List : "<<endl;
      while(head){
        cout << head->data<<" ";
        head=head->next;
      }
}
Node *getNode(){
    int i,h,temp,n;
    cout << "Enter Size of Array : "<<endl;
    cin>>n;
    Node *head=NULL,*tail=NULL;
    cout <<"Enter Value of Head Node :"<<endl;
    cin>>h;
    head=new Node(h);
    tail=head;
    cout << "Enter Element of Array : "<<endl;
    for (i=1; i<n; i++){
        cin>>temp;
        tail->next =new Node(temp);
        tail=tail->next;
    }
return head;
}
int main(){
   Node *node1=getNode();
   Node *node2=getNode();
   Node *ans =makeUnion(node1,node2);
   printUnion(ans);
   return 0;
}