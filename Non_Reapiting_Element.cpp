#include "bits/stdc++.h"
using namespace std;
void nonRepeating(int arr[],int n){
    unordered_map<int,int> umap;
    for (int i=0; i<n; i++){
        umap[arr[i]]++;
    }
    cout <<"Non Repeating Element :"<<endl;
    for (int i=0; i<n; i++){
       if(umap[arr[i]]==1){
        cout <<arr[i] <<" ";
       }
    }
}
int main(){
    int i,n;
    cout << "Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter Element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    nonRepeating(arr,n);
    return 0;
}