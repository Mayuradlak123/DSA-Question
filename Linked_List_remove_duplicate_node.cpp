#include "bits/stdc++.h"
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node (int val){
        data=val;
        next=NULL;
    }
};

//Node *isRemove_duplicate(Node *head);
Node* isRemove_duplicate(Node *head){
    if(head){
        Node *current =head;
        while(current->data!=NULL and current->next->data!=NULL){
            if(current->data==current->next->data){
                Node *temp =current->next;
                current->next=temp->next;
                delete temp;
            }
        }
    }
    return head;
}
void print(Node *head){
    while (head!=NULL)
    {
        cout <<head->data<<"->";
        head=head->next;
    }
    
}
int main(){
    int i,h,temp,n;
    cout << "Enter Size of List : "<<endl;
    cin>>n;

    cout << "Enter value of Head : "<<endl;
    cin>>h;

    Node *head=NULL;
    Node *tail=NULL;
    
    head =new Node(h);
     tail=head;

    cout << "Enter Element of List : "<<endl;
    for (i=0; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
    }
    cout << "Before Remove : "<<endl;
    print(head);
   Node *res=isRemove_duplicate(head);
   cout << "After Remove Duplicate : "<<endl;
   print(res);
   return 0;
}

