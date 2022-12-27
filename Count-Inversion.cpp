#include "bits/stdc++.h"
using namespace std;
long long int Count_Inversion(long long int n,long long int a[]){
 long long int count=0,i,j;
      for(i=0;i<n;i++){
    
        for(j=i;j<n;j++){
    
            if(a[i]>a[j]){
    
                count++;
            }
        }
    }
 return count;  
}
int main(){
    
    long long int j,n,i,count=0;
    
    cout << "Enter size of array : "<<endl;
    
    cin>>n;
    
   long long  int a[n];
    
    cout << "Enter element of array : "<<endl;
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout <<"Total Inversion : "<<Count_Inversion(n,a) <<endl;
    return 0;
}
