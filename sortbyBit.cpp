#include "bits/stdc++.h"

using namespace std;
int bin (int n){
   string ans="";
   int temp=0;
  while(n){
    temp=n%2;
    ans+=to_string(temp);
    n=n/2;
  }
  reverse(ans.begin(),ans.end());
  return stoi(ans);
}
void sortByBit(int n,int *arr){
   map<int,int> mp;
   int i;
    for (i=0; i<n; i++){
        mp[arr[i]]={bin(arr[i])};
    }
   for (auto x : mp)
   {
   cout <<x.first<<":"<<x.second<<", ";   
   }
   
}
int main()
{
    int i, n;
    cout << "Enter n: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of arr: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sortByBit(n, arr);
    return 0;
}