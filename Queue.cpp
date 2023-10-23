#include "bits/stdc++.h"
using namespace std;
vector<int> que;
class Queue
{
public:
    int i;

public:
    void Push(int data)
    {
        que.push_back(data);
    }
    void Pop()
    {
        que.pop_back();
    }
    int front()
    {
        return que[0];
    }
    int rear()
    {
        return que[que.size() - 1];
    }
    void print()
    {
       
        cout << "Itration of Queue :" << endl;
        for (auto x:que)
        {
            cout <<x<<" ";
        }
    }
};
int main()
{
    Queue q;
    q.Push(10);
    q.Push(20);
    q.Push(30);
    q.Push(40);
  q.print();
    return 0;
}