#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;

    cout << "Enter size of array " << endl;

    cin >> n;

    int a[n];

    cout << "Enter element of array " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "After Remove Negative Number " << endl;

    for (i = 0; i < n; i++)
    {

        if (a[i] < 0)
        {

            continue;
        }
        cout << a[i] << " ";
    }
    return 0;
}
