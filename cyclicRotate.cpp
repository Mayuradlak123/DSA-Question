#include "bits/stdc++.h"
using namespace std;

int main(){
  int  i,n;
  cout << "Enter size of array : "<<endl;
  cin>>n;
  int arr[n];
  cout << "Enter Element of array :"<<endl;
  for (i=0; i<n; i++){
    cin>>arr[i];
  }
  cout <<"After Rotate Array by one is : "<<endl;
  for(i=0; i<n; i++){
    swap(arr[i],arr[n-1]);
 }
 for (i=0; i<n; i++){
    cout <<arr[i]<<" ";
 }
  return 0;
}