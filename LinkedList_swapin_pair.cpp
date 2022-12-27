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
    Node *InputList(){
        int i,n,h,temp;
        cout << "Enter Size of List : "<<endl;
        cin>>n;
        cout << "Enter value of head Node : "<<endl;
        cin>>h;
        Node *head=NULL;
        Node *tail=NULL;
        head=new Node(h);
        tail=head;
        for(i=0; i<n-1; i++){
            cin>>temp;
            tail->next=new Node(temp);
            tail=tail->next;
        }
        return head;
    }
    Node *swapList(Node *head){
        
    }
    void printList(Node *head){
        while(head!=NULL){
            cout <<head->data<<" ";
            head=head->next;
        }
    }

int main(){
   Node ob;
   Node *head=ob.InputList();
   ob.printList(head);
   return 0;
}