#include "bits/stdc++.h"
using namespace std;

class Permutation
{
public:
    void printArray(int n, int *arr)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void permutation(int n, int *arr)
    {
        // code to generate all permutations using backtracking.
        int i;
        for (i = 0; i < n; i++)
        {
            swap(arr[i], arr[n - 1]);
            printArray(n, arr);
        }
    }
};
int main(int argc, char const *argv[])
{

    int i, n;
    cout << "Enter n :" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Permutation().permutation(n, arr);
    return 0;
}
