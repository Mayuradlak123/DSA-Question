#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node *next;
    Node (int val){
        data=val;
        next=NULL;
    }
};
void Display(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main(){
    Node *head=NULL;
    Node *second=NULL;

    head=new Node(10);
    second =new Node(8);
    Display(head);
    return 0;
}