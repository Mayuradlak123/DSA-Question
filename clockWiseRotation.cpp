#include "bits/stdc++.h"
using namespace std;
void clockWiseRotation(int *arr, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    swap(arr[i], arr[n-1]);
  }
}
int main()
{
  int i, n;
  cout << "Enter valu of n :" << endl;
  cin >> n;
  int arr[n];
  cout << "Enter element of array: " << endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  clockWiseRotation(arr, n);
  cout << "After Clock wise rotation : " << endl;
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
/*
 int i;
  for (i=0; i<n; i++,n--){
    swap(arr[i],arr[n-1]);
  }

*/