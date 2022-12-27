#include "bits/stdc++.h"
using namespace std;
bool isEqual(int n,int m,int arr1[],int arr2[]){
  if(n!=m){
    return false;
  }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int i;

    bool flag=1;

    for(i=0;i<n;i++){


        if(arr1[i]!=arr2[i]){
            flag=0;
        }
    }
    cout <<" If array is Equal so return 1 \n Otherwise 0 "<<endl;
    return flag;
}
int main(){
    int n,m;

    cout <<"Enter Size of Both array : "<<endl;

    cin>>n>>m;
    
     int arr1[n],arr2[m];
     int i;

    cout << "Enter Element of arr1 : "<<endl;

    for(i=0;i<n;i++){
    cin>>arr1[i];    
    }

    cout << "Enter Element of arr2 : "<<endl;

    for(i=0;i<m;i++){
    cin>>arr2[i];    
    }

   cout <<isEqual(n,m,arr1,arr2)<<endl;
   return 0;
   }