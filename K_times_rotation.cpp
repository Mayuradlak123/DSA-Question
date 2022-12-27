#include "bits/stdc++.h"
using namespace std;
void K_time_roataion(int n,int k,int arr[]){
    int i;
     rotate(arr,arr+(k%n),arr+n);

 cout << "k time roteted array: "<<endl;

     for (i=0; i<n; i++){
        cout <<arr[i]<<" ";
     }
}
int main(){
    
    int i,n,k;
   
   cout <<"Enter size of array : "<<endl;
   cin>>n;

   cout << "Enter value of k : "<<endl;
   cin>>k;

   int arr[n];
   cout << "Enter Element of array : "<<endl;

   for(i=0; i<n; i++){
    cin>>arr[i];
   }
  K_time_roataion(n,k,arr);

return 0;
}