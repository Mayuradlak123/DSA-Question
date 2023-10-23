#include "bits/stdc++.h"
using namespace std;
vector<int> countSmall(int n, int *arr)
{
    int i, j, count = 0;
    vector<int> v;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j <n; j++)
        {
            arr[i]>arr[j] and count++;
           
        }
        v.push_back(count);
        count=0;
    }
    return v;
}
int main()
{
    int n, i;
    cout << "Enter n: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of arr: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = countSmall(n, arr);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}