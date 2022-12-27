#include "bits/stdc++.h"
using namespace std;
void k_rotaion(int n,int k,int arr[]){
     vector<int> v;
     int i;
     for(i=(n-k);i<n;i++){
     	v.push_back(arr[i]);
     }
     cout <<"k time Cyclick Rotation: "<<endl;
    
     for(auto val:v){
     	cout <<val<<" ";
     }
     
     for(i=0;i<n-k;i++){
         cout <<arr[i]<<" ";
     }
}
int main(){
	int n,k,i;
	cout << "Enter the size of array : "<<endl;
	cin>>n;
	cout << "Enter the value of Rotation: "<<endl;
	cin>>k;
	int arr[n];
	cout << "Enter Element of array : "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
    try{
	k_rotaion(n,k,arr);
    }
    catch(exception e){
        
    }
	return 0;

}