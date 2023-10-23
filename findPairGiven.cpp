
#include "bits/stdc++.h"
using namespace std;
bool findPair(int n,int x,int *arr){
     int i,j;
    for (i=0; i<n; i++){
        for (j=i+1; j<n; j++){
            if(abs(arr[i]-arr[j])==n){
                return true;
            }
        }
    }
     return false;
}
int main (){
    int i,n,x;
    cout << "Enter n : "<<endl;
    cin>>n;
    int arr[n];

    cout << "Enter element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Enter x : "<<endl;
    cin>>x;
    findPair(n,x,arr)?printf("Given value pair present"):printf("No value pair present");
    return 0;
}