#include "bits/stdc++.h"
using namespace std;
vector<int> Stack;
class myStack
{
public:
    int n, i;

public:
    void Push(int element)
    {
        Stack.push_back(element);
    }
    void Pop()
    {
        reverse(Stack.begin(), Stack.end());
        Stack.pop_back();
        reverse(Stack.begin(), Stack.end());
    }
    void print()
    {
        reverse(Stack.begin(), Stack.end());

        cout << "Itration of stack is : " << endl;
        for (auto x : Stack)
        {
            cout << x << " ";
        }
    }
    bool isEmpty()
    {
        if (Stack.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int top()
    {
        return Stack[0];
    }
    int size(){
        return Stack.size();
    }
};
int main()
{
    myStack ob;
    ob.Push(10);
    ob.Push(20);
    ob.Push(30);
    ob.Pop();
    ob.print();
    return 0;
}