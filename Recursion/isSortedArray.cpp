#include "bits/stdc++.h"
using namespace std;
bool isSorted(int n,int *arr){
    if(n==0 or n==1){
        return true;
    }
    if(arr[n-1]<arr[n-2]){
        return false;
    }
    return isSorted(n-1,arr);
}
int main (){
    int n,i;
    cout << "Enter n : "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter Element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
   if(isSorted(n,arr)){
    cout << "Given array is sorted : "<<endl;
   }
   else{
    cout << "Not Sorted :"<<endl;
   }
    // isSorted?puts("Given array is Sorted "):printf("Array is Not Sorted :");
    return 0;
}