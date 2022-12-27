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
Node *getNode(){
    int i,h,temp,n;
    cout << "Enter number of Element : "<<endl;
    cin>>n;
    
    cout << "Enter Element of head : "<<endl;
    cin>>h;
    
    Node *tail=NULL;
    Node *head=NULL;
    head =new Node(h);
    tail=head;
    
    cout << "Enter Element of Linked list : "<<endl;
    for (i=1; i<n; i++){
        cin>>temp;
        tail->next=new Node(temp);
        tail=tail->next;
    }
   return head;
}
bool isPallindrom (Node *head){
    Node *temp=head;
    bool flag=false;
    stack<int>s;
    while(head){
      s.push(head->data);
      head=head->next;
    }
    while(temp){
        int i= s.top();
        s.pop();
        if(temp->data==i){
            flag=true;
        }
        else{
            flag=false;
        }
        temp=temp->next;
    }
    return flag;
}
int main(){
  Node *head=getNode();
  if(isPallindrom(head)){
    cout << "Linked List is Pallindromic: "<<endl;
  }
  else{
    cout << "Not Pallindromic : "<<endl;
  }
  return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
Node *getInput()
{
    int i, n, h, temp;
    cout << "Enter size of Linked List : " << endl;
    cin >> n;
    cout << "Enter Value of Head Node : " << endl;
    cin >> h;
    Node *head = NULL;
    Node *tail = NULL;
    head = new Node(h);
    tail = head;
    cout << "Enter value of " << n << " node : " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    return head;
}
bool is_Pallindromic(Node *head)
{

    stack<int> s;
    bool flag = false;
    Node *temp = head;
    while (temp)
    {
        s.push(temp->data);
        temp = temp->next;
    }

    while (head)
    {
        int i = s.top();
        s.pop();
        if (head->data == i)
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
        head = head->next;
    }
    return flag;
}
int main()
{
    Node *head = getInput();
    if (is_Pallindromic(head))
    {
        cout << "Given Linked List is Pallindromic : " << endl;
    }
    else
    {
        cout << "Is Not Palindromic List : " << endl;
    }
}
*/