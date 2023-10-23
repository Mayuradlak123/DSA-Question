#include "bits/stdc++.h"
#include "sorting.h"
// Leetcode : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
using namespace std;
void firstLastOccurence(int n, int x, int arr[])
{
    int i, j = 0, k = 0;
    vector<int> v;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            v.push_back(i);
            break;
        }
    }
    for (j = n; j >= 0; j--)
    {
        if (arr[j] == x)
        {
            v.push_back(j);
            break;
        }
    }
    cout << "First and last occurance of  x is : " << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
}
int main()
{
    int i, n, x;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter x: " << endl;
    cin >> x;
    firstLastOccurence(n, x, arr);
    return 0;
}