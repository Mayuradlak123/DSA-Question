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
void print_List(Node *head,int n){
    int j=0;
    while(head){
    if(j==ceil(n/2)){
        cout <<head->data<<" ";
    }
    head=head->next;
    j++;

    }
}
int main(){
    int i,n,h,temp;

    cout << "Enter Size of List : "<<endl;
    cin>>n;

    cout << "Enter value of head : "<<endl;
    cin>>h;

    Node *head=NULL;
    Node *tail=NULL;

    head=new Node(h);
    tail=head;

    cout << "Enter Element of List :" <<endl;
     for (i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
     }
     cout <<"Middle Element of List :"<<endl;
     
     print_List(head,n);
     return 0;
}