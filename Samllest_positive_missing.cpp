#include "bits/stdc++.h"
using namespace std;
int Smallest_missing_positive(int n,int arr[]){
     int i;
     
}
int main(){
    int i,n;
    cout << "Enter Size of array : "<<endl;
    cin>>n;

    int arr[n];
    cout << "Enter Element of array : "<<endl;
    
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
   
  cout<<Smallest_missing_positive(n,arr);
}