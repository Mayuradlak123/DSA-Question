#include <bits/stdc++.h>
using namespace std;
int secondLargest(int n,int arr[]){
int i,temp=INT_MIN,ans;
  for(i=0; i<n; i++){
    if(arr[i]>=temp);
    temp=arr[i];
    ans=max(ans,temp);
  }
  return ans;
}
int  main(){
    int i,n;
    cout << "Enter Size of Array : "<<endl;
    cin>>n;
    int arr[n];
   cout<<"Enter Element of array : "<<endl;
   for (i=0; i<n; i++){
    cin>>arr[i];
   }
   cout<<"Second Largest Element in Array is : "<<secondLargest(n,arr)<<endl;
   return 0;
}