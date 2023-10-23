#include "bits/stdc++.h"
using namespace std;

class kthElementTwoArray
{
public:
    int kthElement(int n, int m, int key, int arr1[], int arr2[])
    {
        int i=0, j=0,k=0, arr[n + m];

        while (i < n and j < m)
        {
            if (arr1[i] < arr2[j])
            {
                arr[k++] = arr1[i++];
            }
            else
            {
                arr[k++] = arr2[j++];
            }
        }
        while (i < n)
        {
            arr[k++] = arr1[i++];
        }

        while (j < m)
        {
            arr[k++] = arr2[j++];
        }
        cout <<"Iteration of Merged Array: "<<endl;
        for (i = 0; i < sizeof(arr)/sizeof(int); i++)
        {
            cout << arr[i]<<" ";
        }
        return arr[key];
    }
};
int main(int argc, char const *argv[])
{
    kthElementTwoArray object;
    int n, m, i, j, k;
    cout << "Enter the size of first Array:" << endl;
    cin >> n;
    cout << "Enter the size of Second Array: " << endl;
    cin >> m;
    int arr1[n], arr2[m];
    cout << "Enter Element of array 1: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter Element of array 2: " << endl;
    for (j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }
    cout << "Enter value of  k:" << endl;
    cin >> k;
    printf(" \nKth Element in Both array : %d ", object.kthElement(n, m, k, arr1, arr2));
    return 0;
}
