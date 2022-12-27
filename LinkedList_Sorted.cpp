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
void print_Linked_List(Node *head){

    vector<int>v;
    cout << "Unsorted Linked List : "<<endl;
    
    while(head!=NULL){

        cout <<head->data<<"->";
        v.push_back(head->data);
        head=head->next;
    }

    cout <<"NULL"<<endl;
    cout << "Sorted Linked List : "<<endl;
    
    sort(v.begin(),v.end());
    
    for(auto d:v){
        cout <<d<<"->";
    }
    cout <<"NULL"<<endl;
}
int main(){
    int i,h,temp,n;
    cout << "Enter Number of Element : "<<endl;
    cin>>n;
    
    cout << "Enter value of head: "<<endl;
    cin>>h;

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

  print_Linked_List(head);
  return 0;
}
