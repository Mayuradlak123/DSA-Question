#include<bits/stdc++.h>
using namespace std;

void Selection_Sort(int n,int i,int j,int a[]){

    for(i=1;i<=n;i++){
    
       for(j=i;j<n;j++){
    
           if(a[j]<a[i]){
    
               swap(a[i],a[j]);
           }
      } 
    }
}
int32_t main(){
    
    int n,i,j;

   cout << "Enter size of array :"<<endl;

   cin>>n;

   int a[n];

   cout << "Enter element of array: "<<endl;

   for (i=0; i<n; i++ ){

       cin>>a[i];
   }
   Selection_Sort(n,i,j,a);

   cout << "Selection Sort : "<<endl;
    
    for (i=0;i<n;i++){
        
        cout <<a[i]<<" ";
    }

   return 0;
}