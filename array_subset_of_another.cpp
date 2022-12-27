#include<bits/stdc++.h>
using namespace std;
string is_subset(int a1[],int a2[],int n,int m){

    sort(a1,a1+n);
     sort(a2,a2+m);
    
     int i,j,c=0;
    
     for(i=0;i<m;i++){
    
         for(j=0;j<n;j++){
    
             if(a2[i]==a1[j]){
    
                 c++;
             }
         }
     }
     if(c==m){
         return "Yes";
     }
     else{
         return "No";

     }
}
int main(){
    int n,m;
    
    cin>>n>>m;
    
    int arr1[n];
    
    int arr2[m];
    
    int i,j;
    
    for(i=0;i<n;i++){
        cin>>arr1[i];

    }
     for(j=0;j<m;j++){
        cin>>arr2[j];
     }
     cout <<is_subset(arr1,arr2,n,m)<<endl;
     return 0;
}