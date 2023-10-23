#include  "bits/stdc++.h"
using namespace std;
int findMaxSum(int n,int *arr){
    int i,oddSum=0,evenSum=0;
    try
    {
    
    for (i=0; i<n; i+2){
     oddSum+=arr[i];
     evenSum+=arr[i+1];
    }
    
    }
    catch(exception& e)
    {
        cout << "Somthing wend wrong : ";
    }
  
    return max(oddSum,evenSum);
}
int main (){
    int i, n;
    cout << "Enter value of n : "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter element of array : "<<endl;
    for (i=0; i<n; i++){
   cin>>arr[i];
    }
    printf("Maximum sum in given array : %d ",findMaxSum(n,arr));
    return 0;
}