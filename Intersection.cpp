#include <bits/stdc++.h>
using namespace std;

vector<int> Intersection(int n, int m, int a[], int b[])
{

    unordered_set<int> s, s1;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s1.insert(a[i]);
    }
    for (int x : s1)
    {
        if (s.find(x) != s.end())
            v.push_back(x);
            
    }
    return v;
}
int main()
{

    int n, j, i, m;

    cout << "Enter size of array 1:" << endl;

    cin >> n;

    int a[n];

    cout << "Enter size of array 2 " << endl;

    cin >> m;

    int b[m];

    cout << "ENter element of array 1" << endl;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element of array 2" << endl;

    for (i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout << "Intersection  of given array : " << endl;

    vector<int> v = Intersection(n, m, a, b);
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Number of Comman Element in Both array: " << v.size() << endl;
    return 0;
}