#include "bits/stdc++.h"
using namespace std;
int minSwap(int n, int *arr)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    while (arr[i] != i + 1)
    {
      swap(arr[i], arr[arr[i] - 1]);
      count++;
    }
  }
  return count;
}
int main()
{
  int i, n;
  cout << "Enter n : " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter element of array : " << endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  printf("Minimum %d number of Swap is Required ", minSwap(n, arr));
  return 0;
}