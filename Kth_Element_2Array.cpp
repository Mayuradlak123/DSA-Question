#include<iostream>
using namespace std;

int main(){
    
    int j,k,n,m,i;
   
   cout << "Enter size of array 1: "<<endl;
   
   cin>>n;

   int a1[n];

   cout << "Enter Sorted  array 1 : "<<endl;

   for(i=0;i<n;i++){
       cin>>a1[i];
   }

   cout << "Enter size of array 2: "<<endl;
   
   cin>>m;

   int a2[m];

   cout << "Enter  Sorted array 2 : "<<endl;

   for(i=0;i<m;i++){
       cin>>a2 [i];
   }
   int a3[n+m];
   for(i=0;i<n+m;i++){
       for(j=0;j<n;j++){
           for(k=0;k<m;k++){
               if(a1[j]>a2[k]){
                   a3[i]=a2[k];
               }
               else{
                   a3[i]=a1[j];
               }
           }
       }
   }
   for(i=0;i<n+m;i++){
       cout<<a3[i]<<" ";
   }
   return 0;
   
}