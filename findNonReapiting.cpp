#include "bits/stdc++.h"
using namespace std;
void nonRepeating(int n, int arr[])
{
    int i, j;
   map<int,int>mp;
    for (i = 0; i < n; i++) {
       mp[arr[i]]++;
    }
    for (auto x:mp){
        if(x.second==1){
            cout <<x.first<<" ";
        }
    }
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
    nonRepeating(n, arr);
    return 0;
}