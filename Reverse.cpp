#include "bits/stdc++.h"
using namespace std;
void Reverse(int n,int arr[]){
   cout << "Reversed Array : "<<endl;
   int i;
   for (i=n-1; i>=0; i--){
        cout  <<arr[i]<<" ";
   }
}
int main (){
    int n,i;
    cout << "Enter Size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter Elemenet of Array : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    Reverse(n,arr);
    return 0;
}