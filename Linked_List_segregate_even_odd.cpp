#include <bits/stdc++.h>
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
Node *Input_List(){
    int i,n,h,temp;
    cout << "Enter Size of List : "<<endl;
    cin>>n;

    cout << "Enter value of head node: "<<endl;
    cin >>h;
    Node *head=NULL;
    Node *tail=NULL;
    head=new Node(h);
    tail=head;
    cout << "Enter Element of list : "<<endl;
    for (i=0; i<n-1; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
    }
    return head;
}
void print_Even_Odd(Node *head){
    list<int> l;
    while(head!=NULL){
      if(head->data%2==0){
        l.push_front(head->data);
      }
      else{
        l.push_back(head->data);
      }
      head=head->next;
    }
    for (auto val : l){
        cout <<val<<" ";
    }
}
int main(){
    Node *head=Input_List();
    cout << "Segregate Odd and Even : "<<endl;
    print_Even_Odd(head);
    return 0;
}