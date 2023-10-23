#include "bits/stdc++.h"
using namespace std;
void peekElement(int n,int arr[]){
    cout <<"All Peek Element in Array : "<<endl;
    int i;
    for (i=0; i<n; i++){
        if(arr[i]> arr[i+1] and arr[i]>arr[i-1]){
            cout <<arr[i]<<" ";
        }
    }
}
int main (){
    int i,n;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    peekElement(n,arr);
    return 0;
}