#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/sort-colors/
void sort012(int n,int arr[]){
     int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else if (arr[mid] == 2) {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}    
int main(){
    int i,n;
    cout << "Enter Length of array : "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter element of array  :0,1,2 "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    sort012(n,arr);
       cout << "After Sorting 0,1,2 : "<<endl;
    for (int i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}