#include "bits/stdc++.h"
using namespace std;
int kth_Occurence(int arr[],int n,int k,int x){
    int c=0,i;
    for(i=0;i<n;i++){
      if(arr[i]==k){
        c++;
      }
      if(c==x){
        return i;
      }
    }
    return -1;
}
int main(){
    int i,n,k,x;
    cout << "Enter number of elements: " << endl;
    cin>>n;
    int arr[n];
    cout << "Enter Element of array :"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Enter Number of Occurence: "<< endl;
    cin>>k;
    cout << "Enter Element  :"<<endl;
    cin>>x;
    int ans=kth_Occurence(arr,n,k,x);
    cout <<"Kth Occurence Element : "<<ans<<endl;
    return 0;
}