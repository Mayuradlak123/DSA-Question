#include "bits/stdc++.h"
using namespace std;
void reverseinKgroup(int n, int k, int *arr)
{
    int i, start, end;
    for (i = 0; i < n; i = i + k)
    {
        start = i;
        end = min((i + k) - 1, n - 1);
        while (start <= end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}
int main()
{
    int i, n, k;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "Enter k: " << endl;
    cin >> k;

    int arr[n];
    cout << "Enter element of array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseinKgroup(n, k, arr);
    cout << "After reverse array in K group size: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}