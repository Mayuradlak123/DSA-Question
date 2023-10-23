#include "bits/stdc++.h"
using namespace std;
void subArray(int n, int arr[])
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
             cout << endl;
        }
       
    }
}
int main()
{
    int i, n;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subArray(n, arr);
    return 0;
}