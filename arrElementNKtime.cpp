#include "bits/stdc++.h"
using namespace std;
// Question Given an array of size n and a number k, fin all elements that appear more than " n/k " times.
void appearN_Ktime(int n,int k,int arr[]){
   int i;
   map<int,int>mp;
   for (i=0; i<n; i++){
    mp[arr[i]]++;
   }
   for (auto x:mp){
    if(x.second>=n/k){
        cout <<x.first<<" ";
    }
   }
}
int main (){
    int i,n,k;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>k;
    appearN_Ktime(n,k,arr);
}