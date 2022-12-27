#include <bits/stdc++.h>
using namespace std;
vector<int> Alter_sorting(int n, int arr[])
{
    vector<int> v;
    // Sort  this array
    sort(arr, arr + n);
    int i = 0, j = n - 1;
    while (i <= j)
    {
        v.push_back(arr[i++]);
        v.push_back(arr[j--]);
    }
    return v;
}
int main()
{
    int n, i;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Element of array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Element After Sorting : "<<endl;
    vector<int> v = Alter_sorting(n, arr);
    for (i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}