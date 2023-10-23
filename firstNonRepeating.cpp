#include "bits/stdc++.h"
using namespace std;
int firstNonRepeating(int *arr, int n)
{
    map<int, int> mp;
    int i;
    for (i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto x : mp)
    {
        if (x.second == 1)
        {
            return x.first;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int i, n;

    cout << "Enter n : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array element : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printf("First non repeating element : %d", firstNonRepeating(arr, n));
    return 0;
}
