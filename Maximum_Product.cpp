#include "bits/stdc++.h"
using namespace std;
long long Maximum_product(vector<int>arr,int n){
    
    long long result=-1e9,product=1;
     
    int i;

    for (i=0; i<n; i++){

        product*=arr[i];
        result=max(product,result);
        if(result==0){
            result=1;
        }
    }
    product=1;
    
    for (i=n-1; i>=0; i--){

        product*=arr[i];
        result=max(product,result);
        if(result==0){
            result=1;
        }
    }
    return result;
}
int main(){
    int i,n;
    cout <<" Enter size of array : "<<endl;
    cin>>n;

   vector<int>arr(n);
   cout << "Enter Element of Vector : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    
   cout << "Maximum product in Given Array : "<<Maximum_product(arr,n)<<endl;
   return 0;  
}