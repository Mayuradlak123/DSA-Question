#include "bits/stdc++.h"
using namespace std;
void playing_with_number(int arr[],int n,int k){
    int i;
    for(i=k;i<n;i++){
        cout<< arr[i]<<" ";
    }
}
int main(){
  
  int i,n,k;
 cout << "Enter Size of array : "<<endl;

  cin>>n;

  int arr[n];

  cout << "Enter Element of Array : "<<endl;

  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  cout << "Enter k: "<<endl;

 cin>>k;
  
 playing_with_number(arr,n,k);
 
return 0;
}