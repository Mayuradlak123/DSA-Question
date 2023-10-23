#include "bits/stdc++.h"
#include "sorting.h"
using namespace std;
void sorting(int n, int arr[])
{
    bubbleSort(n, arr);
    int i;
    cout << "Alternative Sorting : " << endl;
    
    for (i = 0; i <n; i++)
    {
        cout << arr[n-1] << " " << arr[i] << " ";
        n--;
    }
}
int main()
{
    int i = 0, n;
    cout << "Enter n : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array : " << endl;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    sorting(n, arr);
    return 0;
}