#include "bits/stdc++.h"
using namespace std;
int pairSum(int n, int k, int arr[])
{
    int count = 0, i, j;
    // for (i = 0; i < n; i++)
    // {
    //     for (j = i + 1; j < n; j++)
    //     {
    //         arr[i] + arr[j] == k and count++;
    //     }
    // }
    // using set
    unordered_set<int> s;
    for (i = 0; i < n; i++) {
       if(s.find(abs(arr[i]-k))!=s.end()){
         count++;
       } 
       s.insert(arr[i]);
    }
    return count;
    /* unordered_map<int,int>mp;
    for (i=0; i<n; i++){
     if(mp.find(k-arr[i])!=mp.end()){
         count+=1;
     }
     mp[arr[i]]++;
    }
             }*/
}
int main()
{
    int i, n, k;
    cout << "Enter value of n : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array : " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter value of k : " << endl;
    cin >> k;
    int count = pairSum(n, k, arr);
    cout << "Possible sum : " << count << endl;
    return 0;
}