#include "bits/stdc++.h"
using namespace std;
int minJump(int n, int arr[])
{
    int i, count = 0, mx = 0, cur = 0;
    if (n == 1)
    {
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        mx = max(mx, arr[i] + i);
        if (mx <= i)
        {
            return -1;
        }
        else if (cur >= n - 1)
        {
            break;
        }
        else if (i == cur)
        {
            cur = mx;
            count++;
        }
    }
    return count;
}
int main()
{
    int i, n;
    cout << "Enter legacy of array :" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter item of array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Minimum  number of Jump to Reach end: " << minJump(n, arr);
    return 0;
}