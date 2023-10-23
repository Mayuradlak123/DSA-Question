#include "bits/stdc++.h"
using namespace std;
/*{4, 2, -3, 1, 6}
Output: true */
/*
This return only true or false```````````````````````````````````````````````````````````````````````````````````````````````````````
*/
bool subArraysum(int n, int arr[])
{
  unordered_set<int> sumSet;
  int sum = 0,counter=0;
  for (int i = 0; i < n; i++)
  {
    sum+=arr[i];
    if(sum==0 or sumSet.find(sum)!=sumSet.end()){
      return true;
    }
    sumSet.insert(sum);
  }
  return false;
}


int main()
{
  int i, n;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // printf("Subarray with 0 Sum is : %d ",subArraysumz)
  if (subArraysum(n, arr))
  {
    cout << "Sub Array is Exist with 0 Sum : " << endl;
  }
  else
  {
    cout << "Not Exist in array : " << endl;
  }
  return 0;
}