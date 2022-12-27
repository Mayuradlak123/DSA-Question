#include "bits/stdc++.h"
using namespace std;
void Merge_array(int arr1[],int arr2[],int m,int n){
    int p=n+m;
    set<int> s;
    
    int arr3[n+m];
    
    int j=0,i=0,k=0;
    
    while(i<n){
       
       arr3[k++]=arr1[i++];
   }
   while(j<m){
       
       arr3[k++]=arr2[j++];
   }
   sort(arr3,arr3+p);
   for(i=0;i<p;i++){
       s.insert(arr3[i]);
   }
   int count=0;
   for(auto val:s){
       cout <<val<<" ";
       count++;
   }
}

int main(){
    
    int i,j,n,m;
    
    cin>>n;
    
    cin>>m;
    
    int arr1[n];
    
    int arr2[m];
    
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(j=0;j<m;j++){
        cin>>arr2[j];
    }
    Merge_array(arr1,arr2,m,n);
    return 0;
}