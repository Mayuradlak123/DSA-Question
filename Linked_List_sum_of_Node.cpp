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
void printList(Node* head){
    int sum=0;
    while (head!=NULL)
    {
        cout <<head->data<<"->";
        sum=sum+head->data;
        head=head->next;
    }
    
    cout <<"NULL"<<endl;
    cout <<"Sum of Element : "<<sum<<endl;
}
int main(){
    
    int i,n,temp,h;
    cout <<"Enter Number of Node in Linked List : "<<endl;
    cin>>n;

    Node *head=NULL;
    Node *tail=NULL;

    cout <<"ENter value of head: "<<endl;
    cin>>h;

    head=new Node(h);
    tail=head;

cout << "Enter Element of Linked List : "<<endl;

    for (i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
    }

    printList(head);
    return 0;
}