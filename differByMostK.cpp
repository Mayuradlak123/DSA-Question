#include  "bits/stdc++.h"
using namespace std;
int searchDifference(int n,int k,int x,int arr[]){
    int i,j;
    for (i=0; i<n; i++){
       if(arr[i]==x and (arr[i]-arr[i+1])<=k){
        return i;
       }
    }
 return -1;
}
int main (){
    int i,n,j,x,k;
    cout  << "Enter n : "<<endl;
   cin>>n;
   int arr[n];
   cout << "Enter element of array: "<<endl;

    for (i=0; i<n; i++){
   cin>>arr[i];
    }
    cout << "Enter K : "<<endl;
    cin>>k;
   
    cout << "Enter x : "<<endl;
    cin>>x;
   printf("Answer is : %d ",searchDifference(n,k,x,arr));
    return 0;    
}