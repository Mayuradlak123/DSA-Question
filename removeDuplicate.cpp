#include "bits/stdc++.h"
using namespace std;
void removeDuplicate(int arr[],int n){
    int i;
 /*
 Time Complexity : O(nlogn)
 sort(arr,arr+n);
    for (i=0; i<n; i++){
      if(arr[i]!=arr[i+1]){
        cout <<arr[i] <<" ";
      }
    }*/
}
int main (){
    int i,n;
    cout << "Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter Element of array: "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    removeDuplicate(arr,n);
    return 0;
}