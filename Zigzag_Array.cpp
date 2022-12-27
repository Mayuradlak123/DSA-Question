#include "bits/stdc++.h"
using namespace std;
void Zigzag(int arr[],int n){
 bool flag=true;
	    for(int i=0;i<n-1;i++){
	        if(flag){
	            if(arr[i]>arr[i+1]){
	                swap(arr[i],arr[i+1]);
	            }
	        }
	        else{
	            if(arr[i]<arr[i+1]){
	                swap(arr[i],arr[i+1]);
	            }
	        }
	        flag=!flag;
	    }
}
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
   Zigzag(arr,n);
   return 0;
}