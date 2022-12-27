#include <bits/stdc++.h>
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
Node *Input_Node(){
    int i,n,h,temp;

    cout << "Enter size of Linked List : "<<endl;
    cin>>n;

    cout<<"Enter value of head Node : "<<endl;
    cin>>h;
  
  Node *head=NULL;
  Node *tail=NULL;

  head=new Node(h);
tail=head;
cout << "Enter Element of list : "<<endl;
for (i=1; i<n; i++){
    cin>>temp;
    tail->next=new Node(temp);
    tail=tail->next;
}
return head;
}
void delete_Node(Node* head){
int i=0,k;
cout << "Enter Node for Deletion : "<<endl;
cin>>k;

while(head){
    if(head->data==k){
        head->data=head->next->data;
        head->next=head->next->next;
    }
    head=head->next;
}





/*Node *temp=head;
while (head!=NULL){
 if(head->data==k){
    head->data=head->next->data;
    head->next=head->next->next;    
   }
   head=head->next;
}*/
}
void deleteNode(Node *head){
    int x;
    cout << "Enter value of Node for Deletion: "<<endl;
    cin>>x;
    while(head){
        if(head->data==x){
          head->data=head->next->data;
          head->next=head->next->next;
        }
        head=head->next;
    }
}
void print(Node *head){
    while(head){
        cout <<head->data<<" ";
        head=head->next;
    }
}
int main(){
Node *head=Input_Node();
// delete_Node(head);?
deleteNode(head);
deleteNode(head);
cout <<" After Deletion Node : "<<endl;
print(head);
return 0;
}