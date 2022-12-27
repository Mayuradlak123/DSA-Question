#include "bits/stdc++.h"
using namespace std;
void missing_Number(int n,int arr[]){
    // Other Solution 
     int i,sum=0;
        int into=n*(n+1)/2;
        
        for (i=0; i<n-1; i++){
            sum+=arr[i];
        }

    cout <<"Missing Number :"<<into-sum<<endl;
}
int main(){

    int n,i;
    cout << "Enter Size of Array : "<<endl;
    cin>>n;

    cout << "Enter Element of Array : "<<endl;
    int arr[n];
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
  
   missing_Number(n,arr);
   return 0;
}