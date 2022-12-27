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
void print_List(Node *head,int n){
    int i=0;
    string str;
    while(head){
        if(i==n-1){
            cout <<head->data+1<<"";
            break;
        }
        cout << head->data<<"";
        head=head->next;
        i++;
    }
}
int main(){
    int i,n,h,temp;

    cout << "Enter size of List : "<<endl;
    cin>>n;

    cout << "Enter value of head : "<<endl;
    cin>>h;

    Node *head=NULL;
    Node *tail=NULL;

    head=new Node(h);
  tail=head;
  cout << "Enter Element of Linked list : "<<endl;
    for(i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
    }
    cout <<"After add 01 Linked list represent : "<<endl;
    print_List(head,n);
    return 0;
}