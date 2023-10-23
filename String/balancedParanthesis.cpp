#include "bits/stdc++.h"
using namespace std;
bool isVailid(string str)
{
    stack<char> s;
    int i, n = str.size();
    for (i = 0; i < n; i++)
    {
        if (str[i] == '(' or str[i] == '{' or str[i] == '[')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }
            else if (str[i] == ')')
            {
                if (s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else if (str[i] == '}')
            {
                if (s.top() == '{')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else if (str[i] == ']')
            {
                if (s.top() == '[')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    
 
    if (!s.empty())
    {
        return false;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter an String of braces: " << endl;
    cin >> str;
    if (isVailid(str))
    {
        cout << "Paranthesis is Balanced : True " << endl;
    }
    else
    {
        cout << "Not Balanced : " << endl;
    }
    return 0;
}