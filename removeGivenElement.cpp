#include "bits/stdc++.h"
using namespace std;
// Leetcode :  https://leetcode.com/problems/remove-element/
int removeElement(vector<int> &arr, int x)
{
    int index = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != x)
        {
            arr[index] = arr[i];
            index++;
        }
    }
    return index;
}

int main(int argc, char const *argv[])
{
    int i, n, temp, k;
    vector<int> arr;
    cout << "Enter n  : " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    cout << "Enter k : " << endl;

    cin >> k;
    int ans = removeElement(arr, k);
    cout << "After remove given element : " << endl;
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}
