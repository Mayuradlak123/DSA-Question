#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/jump-game
bool canJump(int n, int *arr)
{

    int reachable = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > reachable)
            return 0;
        reachable = max(reachable, arr[i] + i);
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    int i, n;
    cout << "Enter n :" << endl;
    cin >> n;
    cout << "Enter array :" << endl;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (canJump(n, arr))
    {
        cout << "Jump can Reach to end" << endl;
    }
    else
    {
        cout << "Jump cannot reach to end" << endl;
    }
    return 0;
}
