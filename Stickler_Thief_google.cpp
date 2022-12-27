#include "bits/stdc++.h"
using namespace std;
int Stickler_Thief(int arr[],int n){
   int high = 0,low= 0;
     for(int i=0;i<n;i++)
       {
           int sum = high + arr[i];
          high = max(high,low);
          low = sum;
       }
       return max(high,low);
    /*if(n==1){
            return arr[0];
        }
       int i,x,y,z;
       x=arr[0];
       y=max(arr[1],arr[0]);
       z=y;
       for (i=2;i<n;i++){
           z=max(arr[i]+x,y);
           x=y;
           y=z;
       }
       return z;*/
    }
int main(){
    int n,i;
    cout << "Enter Size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter Element of array : "<<endl;
  for( i=0;i<n;i++){
    cin>>arr[i];
  }
  cout << "Stickler_Thief: "<<endl;

  cout << Stickler_Thief( arr,n);
return 0;
}