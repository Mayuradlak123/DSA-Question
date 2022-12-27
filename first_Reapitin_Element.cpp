#include<bits/stdc++.h>
using namespace std;

// void First_Reapiting(int arr[],int n){
    
//     sort(arr,arr+n);
//     int i,j;

//    for(i=0;i<n;i++){

//    	for(j=0;j<i;j++){

//    		if(arr[i]==arr[j]){

//    			cout <<arr[i]<<endl;

//    			break;
//    		}
//      }
//    }
// }
int firstReapiting(int arr[],int n){
	int i;
	unordered_map<int,int>umap;
	for(i=0; i<n; i++){
      umap[arr[i]]++;
	}
	for(i=0; i<n; i++){
		if(umap[arr[i]]==2){
			return arr[i];
		}
	}
	
	return -1;
}
int32_t main(){
	
	int n,i,j;
	cout << "Enter size of array : "<<endl; 
	cin>>n;
	
	int arr[n];
cout << "Enter Element of array :"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
  
  int f=firstReapiting(arr,n);
  
  cout << "First Repeating Element : "<<f<<endl;
   return 0;
}