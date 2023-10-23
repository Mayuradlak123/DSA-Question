#include "bits/stdc++.h"
using namespace std;
/*void merge(int *arr, int left, int mid, int right)
{
    int i = left, j = mid + 1, x = 0;
    int merge[right - left + 1];
    while (i <= mid and j <= right)
    {
        if (arr[i] <= arr[j])
        {
            merge[x++] = arr[i++];
        }
        else
        {
            merge[x++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        merge[x++] = arr[i++];
    }
    while (j <= right)
    {
        merge[x++] = arr[j++];
    }
    int s = sizeof(arr) / sizeof(int);
    for (int t = 0, h = left; t < s; t++, h++)
    {
        arr[h] = merge[t];
    }
}
void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int mid = left+(right-left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}*/
// void mergeArray(int *arr, int left, int mid, int right)
// {
//     int i = left, j = mid + 1, x = 0;
//     int merge[right-left + 1];
//     while (i <= mid and j <= right)
//     {
//         if (arr[i] <= arr[j])
//         {
//             merge[x++] = arr[i++];
//         }
//         else
//         {
//             merge[x++] = arr[j++];
//         }
//     }
//     while (i <= mid)
//     {
//         merge[x++] = arr[i++];
//     }
//     while (j <= right)
//     {
//         merge[x++] = arr[j++];
//     }
//     int n=sizeof(merge)/sizeof(int);
   

//     for (int g=0,h=left; g<n; g++,h++)
//     {
//         arr[h] = merge[g];
//     }
// }
// void mergeSort(int arr[], int left, int right)
// {
//     if (left >= right)
//     {
//         return;
//     }

//     int mid = left+( right-left) / 2;
//     mergeSort(arr, left, mid);
//     mergeSort(arr, mid + 1, right);
//     mergeArray(arr, left, mid, right);
// }

void mergeSort (int *arr,int left,int right){
    
}
int main()
{
    int i, n;
    cout << "Enter value of n: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    mergeSort(arr, 0, n-1 );
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}
