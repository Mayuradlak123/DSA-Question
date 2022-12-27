#include<bits/stdc++.h>
using namespace std;
int Mergarray(int arr1[],int arr2[],int n,int m){
    vector<int> v;
    int median,i;
    for (i=0;i<n; i++){
        v.push_back(arr1[i]);
    }
    for(i=0; i<m; i++){
        v.push_back(arr2[i]);
    }
    sort(v.begin(),v.end());
    median=v[ceil(v.size()/2)];
  /*  
    int arr3[n+m];
    
    int j=0,i=0,k=0;
   
   while(i<n && j<m){
       
       if(arr1[i]<arr2[j]){
           
           arr3[k++]=arr1[i++];
       }
       else{
           arr3[k++]=arr2[j++];
       }
   }
   while(i<n){
       
       arr3[k++]=arr1[i++];
   }
   while(j<m){
       
       arr3[k++]=arr2[j++];
   }
   int size=n+m;
   sort(arr3,arr3+size);
   cout << "Array after merging : "<<endl;
     for(i=0;i<n+m;i++){
         
        cout <<arr3[i]<<" ";
    }
    
   
   int mid=size/2;
   
   if(size%2==0){
       cout <<"\nMedian of Two sorted array : "<<(arr3[mid]+arr3[mid-1])/2<<endl;
   }    
   else{
       cout<<"\nMedian of Two soted array : "<<arr3[mid]<<endl;
   } */
   return median;
}

int main(){
    int n,m,i,j,k;
    
    cout << "Enter size of array 1 and 2 : "<<endl;
    
    cin>>n>>m;
    
    int arr1[n],arr2[m],arr3[n+m];
    
    cout << "Enter element of array 1 : "<<endl;
    
    for(i=0;i<n;i++){
        
        cin>>arr1[i];
    }
    cout << "Enter element of array 2 : "<<endl;
    
    for(j=0;j<m;j++){
        
        cin>>arr2[j];
    }
    
    cout <<"Median of Two sorted array : "<<Mergarray(arr1,arr2,n,m)<<endl;
     return 0;
}