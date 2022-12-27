#include "bits/stdc++.h"
using namespace  std;
void merge_sorted_Array(int arr1[],int arr2[],int n,int m){
    int i=n-1;
    int j=0;
while(arr1[i]>arr2[j] and i>=n and j<m){
    swap(arr1[i],arr2[j]);
    i--;
    j++;
}









    // while(arr1[i]>arr2[j]&& i>=0 &&j<m){
    //     swap(arr1[i],arr2[j]);
    //     j++;
    //     i--;
    // }
    sort(arr1,arr1+n);
sort(arr2,arr2+m);
}

int main(){
    
    int i,j,n,m;
    
    cout << "Enter size of both array : "<<endl;

    cin>>n>>m;
   
int arr1[n];
int arr2[m];

    cout << "Enter Element of array 1:"<<endl;
     for (i=0; i<n ;i++){
        cin>>arr1[i];
     }

    cout <<"Enter Element of array2 : "<<endl;
    for (j=0; j<n ;j++){
        cin>>arr1[j];
     }
     merge_sorted_Array(arr1,arr2,n,m);

     for (i=0; i<n ;i++){
        cout << arr1[i]<<" ";
     }

     for(j=0;j<m;j++){
        cout <<arr2[j]<<" ";
     }
     return 0;
}