#include "bits/stdc++.h"
using namespace std;

class productArray
{
public:
    vector<int> productAspect(int *arr, int n)
    {
        int i, j, prod = 1;
        vector<int> ans;

        for (i = 0; i < n; i++)
        {
            prod = 1;
            for (j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (arr[j] <= 0)
                {
                    prod *= 1;
                }
                else
                {
                    prod *= arr[j];
                }
            }
            ans.push_back(prod);
        }
        return ans;
    }
};
int main()
{
    int i, n;
    vector<int> ans;
    cout << "Enter Size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    productArray object;
    cout << "Product Aspect: " << endl;
    ans = object.productAspect(arr, n);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}