#include "bits/stdc++.h"
using namespace std;

/*
cccvclass Node{
   public:
   int data;
   Node *next;
   
   Node (int val){
    data=val;
    nextULLjfcsgfshcd

   }
};

*/ 

class Node{
   public:
   int data;
   Node *next;
   
   Node (int val){
    data=val;
    next=NULL;

   }
};
void is_Pallindromic(Node *head){
    
    /*
    Second way of check Linked List is pallindromic or not 
    int number=0;
       while(head!=NULL){
           number=(number*10)+(head->data);
           head=head->next;
       }
       int sum=0,n=number;
       while(n!=0){
           sum=sum*10+(n%10);
           n/=10;
       }
       if(sum==number){
           return 1;
       }
       return 0;
   }
    */
    vector<int>v;

    while(head!=NULL){
        v.push_back(head->data);
		cout << head->data<<"->";
        head=head->next; 
        
    }
    cout <<"NULL"<<endl;
    // This Approch is Working    for Linkedlist 
    vector<int>v1=v;
    reverse(v.begin(),v.end());
    if(v==v1){
        cout <<"Is Pallindrom List "<<endl;
    }
    else{
        cout << "Not Pallindromic : "<<endl;
    }
   
}
int main(){
    int i,n,h,temp;

    cout << "Enter Number of Node : "<<endl;
    cin>>n;

    cout << "Enter value of head: "<<endl;
    cin>>h;

    Node *head=NULL;
    Node *tail=NULL;
     
    head=new Node(h);
   tail=head;

   cout << "Enter  Element of list : "<<endl;
   for(i=1; i<n; i++){
    cin>>temp;
    tail->next=new Node(temp);
    tail=tail->next;
   }
   is_Pallindromic(head);
   return 0;
}