#include "bits/stdc++.h"
using namespace std;
void Merge_array(int arr1[],int arr2[],int m,int n){
    
    int arr3[n+m];
    
    int j=0,i=0,k=0;
    //   while(i<n){
    //     arr3[i++]=arr1[i++];
    //   }
    //   while(j<m){
    //     arr3[j++]=arr2[j++];
    //   }
    //   cout << "After Merge Two array : "<<endl;
    //   for (k=0; k<n+m; k++) {
    //         cout <<arr3[k]<<" ";
    //   }
    while(i<n){
       
       arr3[k++]=arr1[i++];
   }
   while(j<m){
       
       arr3[k++]=arr2[j++];
   }
  for(i=0;i<n+m;i++){
      cout <<arr3[i]<<" ";
  }
}
int main(){
    
    int i,j,n,m;

    cout << "Enter Size of array 1 : "<<endl;
    cin>>n;

    cout << "Enter Size of array 2 : "<<endl;
    cin>>m;
    
    int arr1[n];
    
    int arr2[m];
    cout<< "Enter element of array 1: "<<endl;

    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout << "Enter element of array 2: "<<endl;

    for(j=0;j<m;j++){
        cin>>arr2[j];
    }
    cout << "After Merging array : "<<endl;
    
    Merge_array(arr1,arr2,m,n);
    return 0;
}