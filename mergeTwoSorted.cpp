#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/merge-sorted-array
void merge(int n, int m, int arr1[], int arr2[])
{
    int i = 0, j = 0, k = 0;
    int arr3[n + m];
    while (i < n and j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
    cout << "After merge both array : " << endl;
    for (i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }

 }
int main()
{
    int i, n, m;
    cout << "Enter length of array 1: " << endl;
    cin >> n;
    cout << "Enter length of array 2: " << endl;
    cin >> m;
    int arr1[n], arr2[m];
    cout << "Enter element of array 1" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter element of array 2" << endl;
    for (i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    merge(n, m, arr1, arr2);
    return 0;
}