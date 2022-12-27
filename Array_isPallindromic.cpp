#include <bits/stdc++.h>
using namespace std;
bool isPallindromic(int n, int a[])
{
    int flag = 0, i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == a[n - 1])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        n--;
    }
    //  cout <<flag;
    return flag;
}
int main()
{

    int n, i, sum;

    cout << "Enter number of array " << endl;

    cin >> n;

    int a[n];

    cout << "Enter element of array " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << isPallindromic(n, a) << endl;
    return 0;
}