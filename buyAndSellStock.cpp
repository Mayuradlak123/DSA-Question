#include "bits/stdc++.h"
using namespace std;
// Leetcode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 // [3,5,1,7,4,9,3]
int stockSellBuy(int n, int arr[])
{
   int i,buy=0,profit=0;
   for (i=n-1; i>=0; i--){
    buy=max(arr[i],buy);
    profit=max(buy-arr[i],profit);
   }
   return profit;
}


int main()
{
  int i, n;
  cout << "Enter Element of array : " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter stock price : " << endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int ans = stockSellBuy(n, arr);
  cout << "Maximum Profite in this array : " << ans << endl;
  return 0;
}