#include "bits/stdc++.h"
using namespace std;
bool isPallindrom(int n, int arr[])
{
  int rev = 0, rem, i, t;
  vector<int> v;
  for (i = 0; i < n; i++)
  {
    t = arr[i];
    while (t != 0)
    {
      rem = t % 10;
      rev = rev * 10 + rem;
      t = t / 10;
    }
    v.push_back(rev);
    rev = 0;
  }
  for (i = 0; i < n; i++)
  {
    if (arr[i] != v[i])
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int i, n;
  cout <<" Enter size of array: "<<endl;
  cin >> n;
  int arr[n];
  cout <<"Enter Element of array: "<<endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int ans = isPallindrom(n, arr);
  if (ans)
  {
    cout << "Given array element is pallindrom : " << endl;
  }
  else
  {
    cout << "Not Pallindrom : " << endl;
  }
  return 0;
}