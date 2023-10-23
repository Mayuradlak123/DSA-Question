#include "bits/stdc++.h"
using namespace std;
vector<int> countFrequency(int n, int *arr)
{
    int i = 1, j, temp = 0;
    vector<int> v;
    for (j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (i == arr[k])
            {
                temp++;
            }
        }
        i++;
        v.push_back(temp);
        temp = 0;
    }
    return v;
}
int main()
{
    int i, n, j = 1;
    cout << "Enter size of array " << endl;
    cin >> n;
    cout << "Enter err element : " << endl;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = countFrequency(n, arr);
    for (auto i : ans)
    {
        cout << j << " : " << i << " " << endl;
        j++;
    }
    return 0;
}