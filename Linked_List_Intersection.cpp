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
vector<int> print_List (Node *head){
  vector<int>v;

  while (head){
    //  cout << head->data<<" ";
  v.push_back(head->data);  
     head=head->next;
  }
  return v;
}
int main(){
   int n,m,i,j;
   cout <<"Enter size of First Linked List :"<<endl;
   cin>>n;

   cout << "Enter size of second Linked List :"<<endl;
   cin>>m;
   
    Node *first =input_List(n);
  Node *second=input_List(m);

 vector<int>v=  print_List(first);
 vector<int>v1=print_List(second);

 cout << "Intersection of Both  Linked List "<<endl;
 for (i=0; i<v.size(); i++){
     for (j=0; j<v1.size(); j++){
         if(v[i]==v1[j]){
             cout  <<v[i]<<" ";
         }
     }
 }
return 0;
 }