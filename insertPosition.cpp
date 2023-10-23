#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/search-insert-position/

int insertPosition(vector<int> arr, int x)
{
    // Base condition
    if (arr[0] > x)
    {
        return 0;
    }
    if (arr[arr.size() - 1] < x)
    {
        return arr.size();
    }
    
    int i, n = arr.size();

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
        else if (arr[i] < x && arr[i + 1] > x)
        {
            return i;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    /* code */
    int i, n, temp, ans, x;
    cout << "Enter size of array : " << endl;
    cin >> n;
    vector<int> arr;
    cout << "Enter Element of Array in sorted order :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    cout << "Enter element for find or insert position: " << endl;
    cin >> x;
    ans = insertPosition(arr, x);
    printf("Insert Position will be : %d ", ans);
    return 0;
}
