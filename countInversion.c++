#include "bits/stdc++.h"
using namespace std; 
long long countInversion(int n,int arr[]){
    long long j,i,count=0;
    for (i=0; i<n; i++){
        for (j=i+1; j<n; j++){
              if(arr[i]>arr[j]){
                 count++;
              }
        }
    }
    return count;
}

int main (){
  int i,n;
  cout << "Enter value of n : "<<endl;
  cin>>n;
  int arr[n];
  cout << "Enter Element o array : "<<endl;
  for (i=0; i<n; i++){
    cin>>arr[i];
  }
  long long ans=countInversion(n,arr);
  cout <<"Number of Count Inversion : "<<ans<<endl;
    return 0;
}