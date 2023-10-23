#include "bits/stdc++.h"
#include "Sorting.h"
using namespace std;
int maxSum(int n, int *arr)
{
    mergeSort(arr, 0, n);
    int temp = 0, ans = 0, i, j;
    for (i = 0; i < n; i++)
    {
      ans+=(arr[i]*i);
    }
    return ans;
}
int main()
{
    int i, n;
    cout << "Enter size of array" << endl;
    cin >> n;
    cout << "Enter array element : " << endl;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printf("Maximum sum found in array : %d ", maxSum(n, arr));
    return 0;
}