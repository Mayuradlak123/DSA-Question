#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, no, rev = 0, rem;
    cin >> n;
    no = n;
    while (n != 0)
    {
        rem = n % 10;

        rev = rev * 10 + rem;

        n = n / 10;
    }
   // cout << n << endl;
    //cout << rev << endl;
    if (no == rev)
    {
        cout << "Pallindrom number " << endl;
    }
    else
    {
        cout << "Not Pallindrom" << endl;
    }
    return 0;
}