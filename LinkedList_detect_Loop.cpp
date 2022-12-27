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
void loopHere(Node *head,Node *tail,int pos){
    Node *walk=head;
    int i;
    for(i=1; i<pos; i++){
        walk=walk->next;
        tail->next=walk;
    }
}
bool detectLoop(Node *head){
    if(!head){
        return false;
    }
    Node *low=head;
    Node *high=head;
    while(high->next!=NULL and high!=NULL){
        high=high->next->next;
        low=low->next;
        if(high==low){
            return true;
        }
        
}
return false;
}
void print(Node *head){
   while(head){
    cout << head->data<<"->";
    head=head->next;
   }
   cout <<"NULL";
}
int main(){

    int i,h,temp,n;
    cout << "Enter size of list : "<<endl;
    cin>>n;
    Node *head=NULL,*tail=NULL;
    cout << "Enter value of head: "<<endl;
    cin>>h;
    head=new Node(h);
    tail=head;
    cout << "Enter Element of List : "<<endl;
    for (i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
    }
    int pos;
    cout << "Enter Postion for make Loop: "<<endl;
    cin>>pos;
    //  loopHere(head,tail,pos);
    if(detectLoop){
        cout << "Loop is Present in Linked List :"<<endl;
    }
    else{
      cout << "Not Finding Loop: "<<endl;
    }
    return 0;
//    print(head);
}