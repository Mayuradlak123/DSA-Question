#include "bits/stdc++.h"
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node (int val){
        data=val;
        next=NULL;
    }
};
Node *createList(int n){
   int i,h,temp;
    cout <<"Enter Value of head : "<<endl;
    cin>>h;

    Node *head=NULL;
    Node *tail=NULL;

    head=new Node(h);
    tail=head;

    cout << "Enter Element of Linked List : "<<endl;
 for (i=1; i<n; i++){
    cin>>temp; 
    tail->next=new Node(temp);
    tail=tail->next;
 }
return head;
}
int add_two_List(Node *temp1,Node *temp2){
    string str1="",str2="";
    while(temp1!=NULL){
        str1+=temp1->data;
        temp1=temp1->next;
    }
     while(temp2!=NULL){
        str2+=temp2->data;
        temp2=temp2->next;
    }
    int i,j;
    cout << "this is str1 "<<str2<<endl;
    cout << "This is str2 "<<str1<<endl;
    istringstream(str1)>>i;
    istringstream(str2)>>j;
    int sum=i+j; 
    return sum;
}
int main(){
    int n,m;

    cout << "Enter Size of first Linked List : "<<endl;
    cin>>n;
      Node *first=createList(n);
    cout << "Enter Size of Second Linked List : "<<endl;
    cin>>m;

    Node *second= createList(m);

    int result=add_two_List(first,second);
    cout <<result <<"Sum of Two linked List "<<endl;

    // printList(result);
    return 0;
}