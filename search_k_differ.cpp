#include "bits/stdc++.h"
using namespace std;
void  is_Differ(int arr[],int n,int k,int x){

       int i=0,ans=-1;

       while(i<n){
           if(arr[i]==x){
           	ans=i;
           	break;
		   }
		   i=i+max(1,abs(arr[i]-x)/k);
       }
      cout <<ans<<" ";
}
int main(){

    int n,k,i,x;

    cout << "Enter Size of array : "<<endl;

    cin>>n;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << "Enter Difference : "<<endl;
    cin>>k;
    
    cout << "Enter Value of  x : "<<endl;
    cin>>x;
    
    is_Differ(arr,n,k,x);
    return 0;
}