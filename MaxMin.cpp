#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
int Max(int n,int arr[]){
    int i,ans,temp;
    for (i=0; i<n; i++){
         temp=arr[i];
      ans=max(ans,temp);
    }
    return ans;
}
int Min(int n,int arr[]){
     int i,ans,temp;
    for (i=0; i<n; i++){
         temp=arr[i];
      ans=min(temp,ans);
    }
    return ans;
}

int main (){
    int i,n;
    cout << "Enter Length of array : "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Maximum Element in array : "<<Max(n,arr)<<endl;
    
    cout << "Minimum Element in array : "<<Min(n,arr)<<endl;
return  0;
}