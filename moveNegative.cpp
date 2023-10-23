#include "bits/stdc++.h"
using namespace std;
void moveAtFirst(int n,int arr[]){
    int i,temp=0;
    for (i=0; i<n; i++){
        if(arr[i]<0){
            swap(arr[temp],arr[i]);
            temp++;
        }
    }
    for(i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }
}
int main (){
   int i,n;
   cout << "Enter Length of array : "<<endl;
   cin>>n;
   int arr[n];
   cout << "enter Element of array : "<<endl;
   for (i=0; i<n; i++){
    cin>>arr[i];
   }
   moveAtFirst(n,arr);
  return 0;
}