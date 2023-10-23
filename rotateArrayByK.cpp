#include "bits/stdc++.h"
#include "array.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/rotate-array/
void rotateK(int n,int k,int *arr){
  int i;
  vector<int>v;
  for (i=k; i<n; i++){
    v.push_back(arr[i]);
  }
  for (i=0; i<k;i++){
    v.push_back(arr[i]);
  }
 for (i=0; i<n; i++){
    cout<<v.at(i)<<" ";
 }
}
int main (){
    int i,n,k;
    cout << "Enter size of array" << endl;
    cin>>n;
    int arr[n];
    cout <<"Enter element of array" << endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Enter k :"<<endl;
    cin>>k;
    rotateK(n,k,arr);
    return 0;
}
/*
  int i;
    vector<int>v;
    for (i=k; i<n; i++){
        v.push_back(arr[i]);
    }
    for (i=0; i<k; i++){
        v.push_back(arr[i]);
    }
    cout << "Traversal of array: "<<endl;
    for (i=0; i<n; i++){
        cout <<v.at(i)<<" ";
    }
*/