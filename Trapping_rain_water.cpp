#include "bits/stdc++.h"
using namespace std;
long long trapping_rain_water(int n,int arr[]){
    long long leftmax=INT_MIN;
    long long rightmax=INT_MIN;
    int left=0,right=n-1;
    long long ans=0;
    while(left<right){
        
    }
}
int main(){
    int n,i;
    cout << "Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter Element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
  cout << trapping_rain_water(n,arr)<<endl;
  return 0;
} 