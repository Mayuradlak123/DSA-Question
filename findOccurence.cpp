#include "bits/stdc++.h"
using namespace std;
string findOccurence(int n, int *arr)
{
    string s = "";
    int count = 0, i, j;
    map<int, int> mp;
    for (i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto x:mp){
        s+=to_string(x.first);
        s+=to_string(x.second);
    }

    /*
    int i,j,count=0;
    map<int,int>mp;
string s="";
for (i=0; i<n; i++){
    mp[arr[i]]++;
}
for (auto x:mp){
    s+=to_string(x.first);
    s+=to_string(x.second);
}
    O(n^2) Time Complexity Approach

     for (i=0; i<n; i++){
         for (j=0; j<n; j++){
             if(arr[i]==arr[j]){
                 count++;
             }
         }
         s=s+to_string(arr[i])+to_string(count);
         count=0;
     }
     cout <<s<<" ";*/
    return s;
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
    cout << "Occurence of Each Element : " << findOccurence(n, arr);
    return 0;
}