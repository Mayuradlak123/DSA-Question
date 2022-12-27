#include "bits/stdc++.h"
using namespace std;
long long int minimize_product(int a[],int b[],int n){
    long long int i,sum=0;
       sort(a,a+n);
        sort(b,b+n);
        reverse(b,b+n);
        for(i=0;i<n;i++){
            sum=sum+a[i]*b[i];
        }
        return sum;
    }
int32_t main(void){
     int n,i;
     cin>>n;
     int a[n];
     int b[n];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   
   for(i=0;i<n;i++){
       cin>>b[i];
   }
   cout <<"Minimize Product : "<<minimize_product(a,b,n)<<endl;
   return 0;
}