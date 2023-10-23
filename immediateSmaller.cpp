#include "bits/stdc++.h"
using namespace std;

class findElement
{
public:
  vector<int> immediateSmaller(int *arr, int n)
  {
    int i, j;
    bool check = true;
    vector<int> ans;
    for (i = 0; i < n; i++)
    {
      check=true;
      for (j = i + 1; j < n; j++)
      {
        if (arr[i] > arr[j])
        {
          ans.push_back(arr[j]);
          check = false;
          break;
        }
        else
        {
          if (j == n - 1 && check)
          {
            ans.push_back(-1);
          }
        }
      }
    }
     ans.push_back(-1);
    return ans;
  }
};
int main(int argc, char const *argv[])
{
  findElement object;
  int i, n;
  cout << "Enter size of array : " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter element of array : " << endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<int> ans = object.immediateSmaller(arr, n);
  for (auto x : ans)
  {
    cout << x << " ";
  }

  return 0;
}
