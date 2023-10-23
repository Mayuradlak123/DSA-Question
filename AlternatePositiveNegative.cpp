#include "bits/stdc++.h"
using namespace std;
void Alternate(int n,int arr[]){
    int i=0,j=n-1;

    vector<int>v;
    
    sort(arr,arr+n);
    while(i<j){
        v.push_back(arr[i++]);
        v.push_back(arr[j--]);
    }
    cout << "After Alternate Sorting  : "<<endl;
    for (auto x :v){
        cout <<x<<" ";
    }
}
int main (){
    int i,n;
    cout << "Enter Element of array : "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    Alternate(n,arr);
    return 0;
}