#include "bits/stdc++.h"
using namespace std;
int transition_point(int n,int arr[]){
    int i;
    for (i=0; i<n; i++){
        if(arr[i]==1){
            return i;
        }   
    }
    return -1;
}
int main(){
    int n,i;
    cout << "Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++){
        cin>>arr[i];
    }

    cout << transition_point(n,arr)<<endl;
}