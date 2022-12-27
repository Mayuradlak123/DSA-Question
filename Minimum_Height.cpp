#include "bits/stdc++.h"
using namespace std;
int  Minimize(int arr[],int n){
int k;
cout << "Enter diff : "<<endl;
cin>>k;
sort(arr, arr+n);

       int mini, maxi, i;

      mini =arr[0];maxi=arr[n-1];

       int diff= maxi-mini;

       for(i=1;i<n;i++){ // due to this, the traversal of minimum starts from 1th index to the end and the traversal of maximum starts from the 0th index to (last index - 1), so it does the work for both.
           if(arr[i]<k) 
           {
               continue; // to avoid -ve value.
           }
           mini= min(arr[0]+k , arr[i]-k); //checking if there are another min values  

           maxi= max(arr[n-1]-k , arr[i-1]+k); //checking if there are another max values 
           
           diff= min((maxi-mini), diff); //calculating the difference each time and comparing for min diff with the previous difference.
       }
       return diff;
   
}
int main(){
    int n,i,j;
    cout << "Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    Minimize(arr,n);
return 0;
}