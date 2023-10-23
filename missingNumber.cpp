#include "bits/stdc++.h"
using namespace std;
int missingNumber(int n, int arr[])
{
    int sum = n * (n + 1) / 2, i;
    for (i = 0; i < n - 1; i++)
    {
        sum -= arr[i];
    }
    return sum;
}
int main()
{
    int i, n;
    cin >> n;
    int arr[n];
    for (i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    cout << "Missing Number is : " << missingNumber(n, arr);
    return 0;
}