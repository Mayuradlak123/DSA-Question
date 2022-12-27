#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
Node *getNode(){
    int i,n,h,temp;
    cout << "Enter size of List : " << endl;
    cin>>n;
    Node *head= NULL;
    Node *tail= NULL;
    cout << "Enter value of head node: "<<endl;
    cin>>h;
    head=new Node(h);
    tail=head;
    cout << "Enter element of List : "<<endl;
    for(i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
    }
    return head;
}
void removeDuplicate(Node *head){
    set<int>s;
    while(head){
     s.insert(head->data);
     head=head->next;
    }
    cout << "After Remove Duplicate: "<<endl;
    for(auto item:s){
       cout <<item<<" ";
    }
}
void print(Node *head){
    while(head){
        cout << head->data<<" ";
        head=head->next;
    }
}
int main(){
Node *head=getNode();
cout << "before remove duplicate : "<<endl;
print(head);
cout <<endl;
removeDuplicate(head);

return 0;
}