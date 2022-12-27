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
bool searchInList(Node* head,int k){
    bool f=0;
    while(head!=NULL){
        if(head->data==k){
            f=1;
        }
        head=head->next;
    }
  return f;
}
int main(){
     int i,h,n,temp,k;
     Node *head=NULL;
     Node *tail=NULL;

     cout << "Enter Value of N :"<<endl;
     cin>>n;

     cout <<"Enter value of head: "<<endl;
     cin>>h;

     head=new Node(h);
     tail=head;

     cout << "Enter Elemenet of List : "<<endl;

     for (i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
     }
     
     cout << "Enter Element for Searching : "<<endl;
     cin>>k;
     if(searchInList(head,k)){
         cout <<"Element found Successfully:"<<endl;
     }
     else {
         cout <<"Element Not Found : "<<endl;
     }
     return 0;
}