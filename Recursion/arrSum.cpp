#include "bits/stdc++.h"
using namespace std;
int arrSum(int n,int *arr){
    if(n<=0){
        return 0;
    }
    return arrSum(n-1,arr)+arr[n-1];
}
int main (){
    int n,i;
    cout << "Enter n : "<<endl;
    cin>>n;
    int arr[n];
    cout <<"Enter element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    printf("Sum of arr Element is : %d ",arrSum(n,arr));
    return 0;
}