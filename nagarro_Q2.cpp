#include "bits/stdc++.h"
using namespace std;
void is_Nagarro(int arr1[],int arr2[],int n,int m){
    
    int arr3[n+m];
    
    int i=0,j=0,k=0;
    
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
    
     cout << "Union of array  : "<<endl;
     set<int>s;
     for(i=0;i<n+m;i++){
    //  cout <<arr3[i]<<" ";
         s.insert(arr3[i]);
      }
     for(auto val: s){
         cout <<val<<" ";
     }
    //  cout <<"\n "<<s.size();

}
int main(){
    int i,j,n,m;
    
    cout << "Enter an size of 1st array : "<<endl;

    cin>>n;
    
    cout << "Enter an size of 2nd array : "<<endl;
    
    cin>>m;
    
    int arr1[n];
    
    int arr2[m];
    
    cout <<"Enter Element 1 : "<<endl;
    
    for(i=0;i<n;i++){
    
        cin>>arr1[i];
    }    
    cout <<"Enter Element 2 : "<<endl;
    
    for(i=0;i<m;i++){

        cin>>arr2[i];

    }
    is_Nagarro(arr1,arr2,n,m);
    return 0;
}