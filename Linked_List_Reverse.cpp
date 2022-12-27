#include "bits/stdc++.h"
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int val){
        data=val;
        next=NULL;
    }
};

void printElement(Node *head){
stack<int>s;
    while(head!=NULL){
        cout <<head->data<<" ";
        head=head->next;
        s.push(head->data);
    }
  while(!s.empty()){
    cout <<s.top()<<" ";
    s.pop();
  }
}
int main(){
// getElement();
 int i,h,temp,n;
    cout << "ENter number of Element : "<<endl;
    cin>>n;
    cout << "Enter value of head: "<<endl;
    cin>>h;
    Node *tail=NULL;
    Node *head=NULL;
    Node* prev=head;
    head=new Node(h);
    tail=head;
    for (i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
        head=tail->prev;
    }
printElement(head);
return 0;
}                      