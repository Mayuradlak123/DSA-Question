#include<bits/stdc++.h>
using namespace std;

void First_Reapiting(int arr[],int n){
    
    // sort(arr,arr+n);
    int i,j;
cout << "First Reapeting Element : "<<endl;
   for(i=0;i<n;i++){

   	for(j=1;j<i;j++){

   		if(arr[i]==arr[j] and i!=j){

   			cout <<arr[j]<<endl;

   			break;
   		}
   		break;
     }
   }
}
int32_t main(){
	
	int n,i,j;
	cout << "Enter size of array : "<<endl;
	cin>>n;
	
	int arr[n];
cout << "Enter Element of array : "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
  
  First_Reapiting(arr,n);
  
   return 0;
}