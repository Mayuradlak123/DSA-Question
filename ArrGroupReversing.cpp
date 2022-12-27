#include <bits/stdc++.h>
using namespace std; 
void reverseGroup(int n,int k,int arr[]){
    int i=0,j;
      while(i<n){
        for (j=k-1; j>=0; j--){
            cout <<arr[j]<<" ";
        }
        i=i+k;
      }
}
//
int main (){
    int n,i,k;
    cout << "Enter Size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter array Element : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Enter group size: "<<endl;
    cin>>k;
    reverseGroup(n,k,arr);
return 0;
}