#include "bits/stdc++.h"
using namespace std;

void printArray(int n,int *arr){
    int i;
    for (i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }
}
void getArray (int *arr,int n){
   cout <<"Enter size of array : "<<endl;
   cin>>n;
   cout << "Enter element of array : "<<endl;
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
}