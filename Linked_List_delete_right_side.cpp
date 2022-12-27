#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node *Insert_node()
{
    int i, n, h, temp;
    cout << "Enter size of List : " << endl;
    cin >> n;

    cout << "Enter value of head : " << endl;
    cin >> h;
    Node *head = NULL;
    Node *tail = NULL;
    head = new Node(h);
    tail = head;
    cout << "Enter Node's of List : " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    return head;
}
Node *delete_right_most(Node *head)
{

    if (!head->next){
        return head;
    }
    head->next = delete_right_most(head->next);
    if (head->data < head->next->data)
    {
        return head->next;
    }
   else{
    return head;
   }
}
void print(Node *head)
{
    while (head->next != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = Insert_node();
    Node *head1 = delete_right_most(head);
    print(head1);
    return 0;
}