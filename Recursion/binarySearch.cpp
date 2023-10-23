#include "bits/stdc++.h"
using namespace std;
int binarySearch(int start, int end, int *arr, int k)
{
    int mid = start + end / 2;
    if (arr[mid] == k)
    {
        return mid;
    }
    else if (arr[mid] > k)
    {
        binarySearch(start, mid - 1, arr, k);
    }
    else if (arr[mid] < k)
    {
        binarySearch(start + 1, end, arr, k);
    }
    else
    {
        return -1;
    }
}
int main()
{
    int i, n, start, end, mid, k;
    cout << "Enter n: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter k :" << endl;
    cin >> k;
    int Index=binarySearch(0,n-1,arr,k);
    Index<0?printf("k  Not Found in array "):printf("K found at Index : %d ",Index);

//  printf("K is Found at index : %d ", binarySearch(0, n - 1, arr, k));
    return 0;
}