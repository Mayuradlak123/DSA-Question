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
Node *input_List(int n){
    int i,h,temp;
    cout << "Enter value of head List :"<<endl;
    cin>>h;

    Node *head=NULL;
    Node *tail=NULL;

    head=new Node(h);
    tail=head;

    cout << "Enter Element of List: "<<endl;
  for (i=1; i<n; i++){
    cin>>temp;
    tail->next =new Node(temp);
    tail=tail->next;
  }
return head;
}
void print_List (Node *head){
  while (head){
     cout << head->data<<"->";
     head=head->next;
  }
}
int main(){
   int n,m;
   cout <<"Enter size of First Linked List :"<<endl;
   cin>>n;

    Node *first =input_List(n);
cout<< "Representation of Linked List : "<<endl;

    print_List(first);
    return 0;
 }