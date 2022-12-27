#include <bits/stdc++.h>
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
Node *getNode(){
    int i,n,h,temp;
    cout << "Enter size of Linked List  : "<<endl;
    cin>>n;
    cout << "Enter value of head Node : "<<endl;
    cin>>h;
   Node *head=NULL,*tail=NULL;
    head=new Node(h);
    tail=head;
    cout << "Enter Element of Linked List : "<<endl;
    for (i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
    };
    return head;
}
void moveAtEnd(Node *head){
    vector<int>v;
   while(head){
v.push_back(head->data);
head=head->next;
   }
   swap(v[0],v[v.size()-1]);
   for (auto val:v){
    cout << val<< " ";
   }   
}

int main (){
    Node *head=getNode();
    cout << "Traversal of Linked List : "<<endl;
    moveAtEnd(head);
    return 0;
}
