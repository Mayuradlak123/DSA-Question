#include "bits/stdc++.h"
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>even ;
    vector<int>odd ;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even.push_back(a[i]);
        }
        else{
            odd.push_back(a[i]);
        }
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());

    
    for(i=0;i<=n/2;i++){
        
        cout <<even[i]<<" "<<odd[i]<<" ";
        
    
  }
}