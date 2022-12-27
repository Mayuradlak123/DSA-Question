#include "bits/stdc++.h"
using namespace std;
bool key_pair(int n, int k, int arr[])
{
    int i, sub, f = 0,c=0;
    unordered_set<int> s;
    for (i = 0; i < n; i++)
    {
        sub = k - arr[i];
        if (s.find(sub) != s.end())
        {
            f = 1;
            c++;
        }
        else
        {
            s.insert(arr[i]);
        }
    }
    cout <<c<<"\n";
    return f;
}
int main()
{
    int n, k, i;

    cout << "Enter size of array : " << endl;
    cin >> n;

    cout << "Enter Element of array : " << endl;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter sum : " << endl;
    cin >> k;

    cout << key_pair(n, k, arr) << endl;

    return 0;
}