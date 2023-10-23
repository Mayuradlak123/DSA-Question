#include "bits/stdc++.h"
using namespace std;

class leftRotateByK
{
public:
    vector<int> leftRotate(int n, int k, int *arr)
    {
        int i, j;
        vector<int> v;
        for (i = k; i < n; i++)
        {
            v.push_back(arr[i]);
        }
        for (i = 0; i < k; i++)
        {
            v.push_back(arr[i]);
        }
        return v;
    }
 };
int main(int argc, char const *argv[])
{
    leftRotateByK object;
    int i, n, k;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " Enter value of k :" << endl;
    cin >> k;
    cout << "After Left Rotate By k : " << endl;
    vector<int> ans = object.leftRotate(n, k, arr);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}
