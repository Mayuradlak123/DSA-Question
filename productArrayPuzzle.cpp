#include "bits/stdc++.h"
using namespace std;
vector<int> productPuzzle(int n, int *arr)
{
    int i, j, product = 1;
 //  O(n) Time Complexity
    vector<int> ans(n);
    for (i = 0; i < n; i++)
    {
        ans[i] = product;
        product *= arr[i];
    }
    product = 1;
    for (i = n - 1; i >= 0; i--)
    {
        ans[i] *= product;
        product *= arr[i];
    }
    return ans;
}
vector<int> getProduct(int n, int *arr)
{
    int i, j, product = 1;
    vector<int> ans;
 //  O(n^2) Time Complexity

    for (i = 0; i < n; i++)
    {
        product = 1;
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            product *= arr[j];
        }
        ans.push_back(product);
    }
    return ans;
}
int main()
{
    int i, n;
    cout << "Enter n : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = getProduct(n, arr);
    cout << "Product of all array: " << endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}