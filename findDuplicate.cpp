#include "bits/stdc++.h"
using namespace std;
void findDuplicate(int n,int arr[]){
    int i,j;
   /* 
   O(n^2) Time Complexity Approach
   set<int>s;
    for (i=0;i<n;i++){
        for (j=1;j<=n;j++){
           if(arr[i]==arr[j] and i!=j){
              s.insert(arr[i]);
           }
        }
    }
    cout<<"Duplicate Element in array : "<<endl;
    for (auto x:s){
        cout <<x<<" ";
    }*/
    unordered_map<int,int>mp;
    // O(n) Approach
    for(i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        if(x.second>1){
            cout <<x.first<<" ";
        }
    }
}
int main (){
    int i,n;
    cout << "Enter Length of array :"<<endl;
    cin>>n;
    int arr[n];
    cout <<" Enter Element of array :"<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    findDuplicate(n,arr);
    return 0;
}