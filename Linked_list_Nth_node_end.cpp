#include <iostream>
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
Node *Input_List(){
    int n,i,h,temp;

    cout << "Enter Number of Node :"<<endl;
    cin>>n;

    cout << "Enter data of head node: "<<endl;
    cin>>h;

    Node *head=NULL;
    Node *tail=NULL;
    head=new Node(h);

    tail=head;

    cout << "Enter Element of List : "<<endl;
    for (i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
    }
    return head;
}
int Nth_node(Node *head,int k){
   int j=0;
  while (head!=NULL)
  {
      head=head->next;
      j++;
      if(j==k-1){
        return head->data;
      }
  }
  return -1;
  
}
int main(){
Node *head=Input_List();
int k;
cout << "Enter value of k : "<<endl;
cin>>k;
cout << "Nth Node in List : "<<Nth_node(head,k)<<endl;
}