#include "bits/stdc++.h"
using namespace std;

bool find_pair(int arr[],int n,int x){
     int i=0,j=1;
  sort(arr,arr+n);
  
  while(i<n && j <n)
  {
      if(abs(arr[i]-arr[j])==x && i<j){
          return true;
      }
      else if(abs(arr[i]-arr[j]) <x){
          j++;
      }
      else{
       i++;

           if(i==j){
          j++;
          i--;
           }
      }        
  }
  return false;  
}
int main(){
    int n,x,i;
    cout << "Enter size of array : "<<endl;
    cin>>n;

    int arr[n];
    cout << "Enter Element of Array : "<<endl;

    for ( i = 0; i < n; i++)
    {
           cin>>arr[i];
    }

    cout << "Enter Diffrence : "<<endl;
    cin>>x;
    
   cout << find_pair(arr,n,x);    
   return 0;
}