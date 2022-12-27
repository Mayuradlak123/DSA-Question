#include "bits/stdc++.h"
using namespace std;

void shift_K(int arr[],int n,int k){
     int i,p=0;
     for (i=0; i<n; i++){
        if(arr[i]==k){
            swap(arr[p],arr[i]);
            p++;
        }
     }
     cout << "After Shift array Look Like : "<<endl;
  for (i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}
int main (){
    int i,n,k;
    cout << "Enter Size of Array : "<<endl;
    cin>>n;

   int arr[n]; 
   cout << "Enter Element of array : "<<endl;
   for (i=0;i<n;i++){
    cin>>arr[i];
   }
   cout << "Enter k : "<<endl;
   cin>>k;
   shift_K(arr,n,k);
   return 0;
}