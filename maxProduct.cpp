#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/maximum-product-subarray
//{6,-3,-10,0,2}ans 180, {1,-2,-3,0,7,-8,-2}ans 112
// O(n) Time Complexity Approach
long long maxProduct(int n, int arr[])
{
    long long i, j, product = INT_MIN, temp = 1;

    for (i = 0; i < n; i++)
    {
        temp *= arr[i];
        product = max(product, temp);
        if (temp == 0)
        {
            temp = 1;
        }
    }

    return product;
}
int main()
{
    int n, i;
    cout << "Enter Size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Element of array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long Product = maxProduct(n, arr);
    cout << "Maximum Product of subarray :" << Product << endl;
    return 0;
}