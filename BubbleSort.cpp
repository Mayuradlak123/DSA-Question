#include "bits/stdc++.h"
#include "array.h"
using namespace std;
class BubbleSort{
public:
void bubbleSort(int n, int arr[])
{
    int i, counter = 1;
    cout << "sorted array using bubble sort : " << endl;
    while (counter <= n)
    {
        for (i = 0; i < n-counter; i++)
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        counter++;
    }
}

};
int main()
{
    BubbleSort sort;
    int n, i;
 cout << "Enter size of array "<<endl;
    cin >> n;
    int arr[n];
    cout << "Enter Element of Array"<<endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   sort.bubbleSort(n, arr);
    printArray(n, arr);
    return 0;
}