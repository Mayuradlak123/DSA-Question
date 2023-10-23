#include "bits/stdc++.h"
using namespace std;
void insertionSort(int n, int arr[])
{
    int i, j;
    for (i = 1; i <n; i++)
    {
        int curr = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > curr)
        {
            arr[j + 1]= arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}
int main()
{
    int i, n;
    cout <<"Enter size off array: "<<endl;
    cin >> n;
    int arr[n];
    cout << "Enter Element of Array : "<<endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(n, arr);
    cout << "Sorted Array : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}